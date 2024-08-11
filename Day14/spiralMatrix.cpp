class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>res;
        int e1 = matrix.size()-1,e2 = matrix[0].size()-1, i=0, j =0;
        while(j<=e1 && i<=e2){
            int m,n;
            m = i;
            while(m<=e2){
                res.push_back(matrix[j][m]);
                m++;
            }
            n = j+1;
            while(n<=e1){
                res.push_back(matrix[n][e2]);
                n++;
            }
            m = e2-1;
            while(m>=i)
                res.push_back(matrix[e1][m--]);
            n = e1-1;
            while(n>j)
                res.push_back(matrix[n--][i]);
            i++; j++; e2--; e1--;
        }
        res.resize(matrix.size()*matrix[0].size());
        return res;
    }
};