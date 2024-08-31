class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int i, prev = INT_MAX;
        priority_queue<int, vector<int>, greater<int>>pq;
        for(i=0; i<heights.size(); i++){
            if(i!=0 && prev < heights[i])
                pq.push(heights[i]-prev);
            if(pq.size()>ladders){
                if(pq.top()<=bricks){
                    bricks -= pq.top();
                    pq.pop();
                }   
                else
                    return i-1;
            }
            if(ladders==0 && i!=0 && prev < heights[i])
                bricks-= heights[i]-prev;
            prev = heights[i];
        }
        return i-1;
    }
};
