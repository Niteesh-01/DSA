class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // //brute force approach
        // vector<vector<int>> ans;

        // set<vector<int>> s;// we used set here and not unordered_set bcoz to use unordered set for primitive data we need custom hashing 

        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         for(int k=j+1;k<nums.size();k++){
        //             if(nums[i]+nums[j]+nums[k]==0){
        //                 vector<int> v={nums[i],nums[j],nums[k] };
        //                 sort(v.begin(),v.end());
        //                 if(s.find(v)==s.end()) {
        //                     ans.push_back(v);
        //                     s.insert(v);
        //                 }
        //             }
        //         }
        //     }
        // }
        // return ans;


        // //optimise approach using hashing

        // set<vector<int>> uniq;

        // for(int i=0;i<nums.size();i++){
        //     set<int> s;
        //     for(int j=i+1;j<nums.size();j++){
        //         int third=-(nums[i]+nums[j]);

        //         if(s.find(third)!=s.end()){
        //             vector<int> tri={nums[i],nums[j],third};
        //             sort(tri.begin(),tri.end());
        //             uniq.insert(tri);
        //         }
        //         s.insert(nums[j]);
        //     }
        // }
        // vector<vector<int>> ans(uniq.begin(),uniq.end()); //adding all uniq set elements to ans 
        // return ans;


        //optimized (two pointer)

        int n=nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j=i+1;
            int k=n-1;

            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==0) {
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1]) j++;
                }
                else if(sum<0) j++;
                else k--;
            }
        }
        return ans;
    }
};