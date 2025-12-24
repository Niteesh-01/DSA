class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        int n=heights.size();
        stack<int> st;
        vector<int> ans(n);
        st.push(heights[n-1]);
        ans[n-1]=0;
        for(int i=n-2;i>=0;i--){
            int count=0;
            while(!st.empty() && heights[i]>st.top()){
                st.pop();
                count++;
            }
            if(!st.empty()) count++;
            st.push(heights[i]);
            ans[i]=count;
        }
        return ans;
    }
};