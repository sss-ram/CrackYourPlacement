class Solution {
public:
    struct comp{
        bool operator()(const pair<double,int>&a, const pair<double,int>&b) {
            if(a.first == b.first)
                return a.second<b.second;
            return a.first<b.first;
        }
    };
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<double, int>, vector<pair<double,int>>, comp>pq;
        vector<vector<int>> res;
        for(int i = 0; i<points.size(); i++) {
            double val = sqrt(points[i][0]*points[i][0] + points[i][1]*points[i][1]); 
            pq.push({val,i});
            while(pq.size()>k)
                pq.pop();
        }
        while(pq.size()>0) {
            res.push_back({points[pq.top().second][0],points[pq.top().second][1]});
            pq.pop();
        }
        return res;
    }
};
