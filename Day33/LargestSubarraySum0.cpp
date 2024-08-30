class Solution {
  public:
    int maxLen(vector<int>& arr, int n) {
        // Your code here
        int ans = 0, s = 0;
        unordered_map<int, int>m;
        m[0] = -1;
        for(int i=0; i<n; i++) {
            s += arr[i];
            if(s==0)
                ans = i+1;
            if (m.find(s) != m.end()) 
                ans = max(ans, i - m[s]);
            else
                m[s] = i;

        }
        return ans;
    }
};
