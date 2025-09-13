class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int m=nums.size();
        int n=queries.size();
        vector<int> ans(n);
        //1)sort nums
        sort(nums.begin(),nums.end());
        //now find pre sum
        for(int i=1;i<m;i++){
            nums[i]+=nums[i-1];
        }
        //now compare it to query elements
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<m;j++){
                if(queries[i]>=nums[j]) count++;
                else break;
            }
            ans[i]=count;
        }
        return ans;
        
    }
};