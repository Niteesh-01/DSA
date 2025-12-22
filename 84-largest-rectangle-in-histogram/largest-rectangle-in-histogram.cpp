class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int> nextS(n,0);
        vector<int> preS(n,0);
        stack<int> st;
        nextS[n-1]=n;
        st.push(n-1);
        for(int i=n-2;i>=0;i--){
            while(st.size()>0 && heights[st.top()]>=heights[i]){
                st.pop();
            }
            if(st.empty()) nextS[i]=n;
            else{
                nextS[i]=st.top();
            }
            st.push(i);
        }

        preS[0]=-1;
        stack<int> st1;
        st1.push(0);
        for(int i=1;i<n;i++){
            while(st1.size()>0 && heights[st1.top()]>=heights[i]) st1.pop();
            if(st1.empty()) preS[i]=-1;
            else{
                preS[i]=st1.top();
            }
            st1.push(i);
        }
        int maxArea=0;
        for(int i=0;i<n;i++){
            int area=heights[i] * (nextS[i] - preS[i] - 1);
            maxArea=max(maxArea,area);
        }
        return maxArea;
    }
};