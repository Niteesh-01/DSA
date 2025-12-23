class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        stack<int> st;
        vector<int> ans(n,-1);
        for(int i=0;i<2*n;i++){
            int j=i%n;
            while(!st.empty() && nums[j]>nums[st.top()]){
                ans[st.top()]=nums[j];
                st.pop();
            }
            st.push(j);
        }
        return ans;


        // brute force approach

        // vector<int> ans(nums.size(),-1);
        // if(nums.size()==1) return ans;
        // for(int i=0;i<nums.size();i++){
        //     int j=i+1;
        //     if(i==nums.size()-1) j=0;
        //     while(j!=i){
        //         if(nums[j]>nums[i]){
        //             ans[i]=nums[j];
        //             break;
        //         }
        //         if(j<nums.size()) j++;
        //         if(j==nums.size()) j=0;
        //     }
        // }
        // return ans;
    }
};