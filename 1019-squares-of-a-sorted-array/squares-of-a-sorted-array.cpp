class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // int n=nums.size();
        // vector<int> ans;
        // for(int i=0;i<n;i++){
        //     ans.push_back(nums[i]*nums[i]);
        // }
        // sort(ans.begin(),ans.end());
        // return ans;

        // vector<int> neg;
        // vector<int> pos;
        // vector<int> ans;

        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]<0) neg.push_back(nums[i]);
        //     else pos.push_back(nums[i]);
        // }

        // int i=neg.size()-1,j=0;
        // while(i>=0 && j<pos.size()){
        //     int sq=neg[i]*neg[i];
        //     int sq1=pos[j]*pos[j];
        //     if(sq<sq1) {
        //         ans.push_back(sq);
        //         i--;
        //     }
        //     else{
        //         ans.push_back(sq1);
        //         j++;
        //     }
        // }
        // // push the remainning elements of neg vector
        // while(i>=0){
        //     ans.push_back(neg[i]*neg[i]);
        //     i--;
        // }
        // //push remaining of pos
        // while(j<pos.size()){
        //     ans.push_back(pos[j]*pos[j]);
        //     j++;
        // }
        // return ans;


        //without using extra spaces

        vector<int> ans(nums.size(), 0);
        int i=0;
        int j=nums.size()-1;
        int k=ans.size()-1;

        while(i<=j){
            if(abs(nums[i])<=abs(nums[j])){
                ans[k]=nums[j]*nums[j];
                j--;
            }
            else{
                ans[k]=nums[i]*nums[i];
                i++;
            }
            k--;
        }
        return ans;
    }
};