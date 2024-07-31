class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int max_area = 0;
        stack<pair<int,int>>st;
        for(int i=0; i<heights.size(); i++){
            int ind = i;
            while(st.size()>0 && st.top().first>heights[i]){
                ind = st.top().second;
                max_area = max(max_area, (i-ind)*st.top().first);
                st.pop();
            }
            st.push({heights[i],ind});
        }
        while(st.size()>0){
            int ind = st.top().second, na =  (heights.size()-ind)*st.top().first;
            max_area = max(max_area,na);
            st.pop();
        }
        return max_area;
        
    }
};