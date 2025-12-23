class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
        stack<int> st;
        vector<int> ans(n,0);
        st.push(prices[n-1]);
        ans[n-1]=prices[n-1];
        //calculate next smaller of each element and subtract it from price[i]
        for(int i=n-2;i>=0;i--){
            while(st.size()>0 && st.top()>prices[i]) st.pop();
            if(st.empty()) ans[i]=(prices[i]);
            else{
                ans[i]=(prices[i]-st.top());
            }
            st.push(prices[i]);
        }
        return ans;
    }
};