class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // int n=nums.size();
        // vector<int> pos(n/2);
        // vector<int> neg(n/2);
        // int i=0;
        // int t=0,a=0;
        // while(i<n)
        // {
            
        //     if(nums[i]>0){
        //         pos[t]=nums[i];
        //     }
        //     else neg[a]=nums[i];
        //      i++;
             

        // }
       
           
        // for(int i=0;i<n/2;i++){
        //     nums.push_back(pos[i]);
        //     nums.push_back(neg[i]);
        // }
        // return nums;

        
    //    for(int i=0;i<n;i++)
    //    {
    //      if(nums[i]<0)
    //         {
    //             nums.push_back;
    //         }
    //         else
    //         {
    //             nums.pusinsert(nums[i+2],nums[i]);
    //         }
    //    }
    //     return nums;

        // int n = nums.size();
        // vector<int> pos;
        // vector<int> neg;

        // // Separate positive and negative numbers
        // for (int num : nums) {
        //     if (num > 0)
        //          pos.push_back(num);
        //     else 
        //         neg.push_back(num);
        // }

        // // Merge them in alternating order
        // vector<int> result;
        // for (int i = 0; i < n / 2; ++i) {
        //     result.push_back(pos[i]);
        //     result.push_back(neg[i]);
        // }

        // return result;

        //two pointer 
        int pos=0, neg=1;
        int n=nums.size();
        vector<int> ans(n);
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) {
                ans[pos]=nums[i];
                pos+=2;
            }
            else{
                ans[neg]=nums[i];
                neg+=2;
            }
        }
        return ans;
    }
};