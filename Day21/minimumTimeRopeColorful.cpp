class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int t = 0;
        for(int i=0; i<colors.length()-1; i++){
            int mn = neededTime[i], s = neededTime[i];
            while(colors[i]==colors[i+1]){
                s += neededTime[i+1];
                mn = max(neededTime[i+1], mn);
                mn = max(neededTime[i], mn);
                i++;
            }
            t += s - mn;
        }
        return t;
    }
};