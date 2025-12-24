class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(k==1) return nums;
        int n=nums.size();
        stack<int> st;
        vector<int> v(n);  //to store next greater ele
        v[n-1]=n;
        st.push(n-1);
        for(int i=n-2;i>=0;i--){
            while(st.size()>0 && nums[i]>=nums[st.top()]) st.pop();
            if(st.empty()) v[i]=n;
            else{
                v[i]=st.top();
            }
            st.push(i);
        }
        //now to find max of window
        vector<int> ans;
        int j=0;
        for(int i=0;i<n-k+1;i++){
            if(j<i) j=i;
            int mx=nums[i];
            while(j<i+k){  //jb tk next greater window ke ander h
                mx=nums[j];
                if(v[j]>=i+k) break;
                j=v[j];
            }
            ans.push_back(mx);
        }
        return ans;

        //brute force approach TLE
        // for(int i=0;i<n-k+1;i++){
        //     int max=nums[i];
        //     for(int j=i+1;j<i+k;j++){
        //         if(nums[j]>max) max=nums[j];
        //     }
        //     ans.push_back(max);
        // }
        // return ans;
    }
};