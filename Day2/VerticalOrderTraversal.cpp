class Solution {
public:
    int mx, mn;
    struct Comparator{
        bool operator()(const vector<int>&a, const vector<int>&b) const{
            if(a[0]==b[0]){
                if(a[1]==b[1])
                    return a[2]>b[2];
                return a[1]>b[1];
            }
            return a[0]>b[0];
        }
    };
    void insPq(TreeNode* root, int lvl, int sign,
                priority_queue<vector<int>, vector<vector<int>>, Comparator>&pq){
        if(!root)
            return;
        mn = min(mn,sign);
        mx = max(mx,sign);
        insPq(root->left,lvl+1,sign-1,pq);
        pq.push({sign,lvl,root->val});
        insPq(root->right,lvl+1,sign+1,pq);
    }

    vector<vector<int>> verticalTraversal(TreeNode* root) {
        priority_queue<vector<int>, vector<vector<int>>, Comparator>pq;
        mx = INT_MIN;
        mn = INT_MAX;
        insPq(root,0, 0,pq);
        int st = 0 - pq.top()[0];
        vector<vector<int>>res(mx-mn+1,vector<int>());
        while(pq.size()>0){
            auto x = pq.top();
            pq.pop();
            res[x[0]+st].push_back(x[2]);
        }
        return res;
    }
};