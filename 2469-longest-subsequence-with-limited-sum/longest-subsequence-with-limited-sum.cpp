class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int m=nums.size();
        int n=queries.size();
        vector<int> ans(n);
        //1)sort nums
        sort(nums.begin(),nums.end()); //TC =O(mlogm) , SC=O(logm)
        //now find pre sum
        for(int i=1;i<m;i++){
            nums[i]+=nums[i-1];
        }
        //now compare it to query elements
        //TC=(m*n)
        // for(int i=0;i<n;i++){
        //     int count=0;
        //     for(int j=0;j<m;j++){
        //         if(queries[i]>=nums[j]) count++;
        //         else break;
        //     }
        //     ans[i]=count;
        // }  this can be done using binary search

        for(int i=0;i<n;i++){
            int maxlen=0;
            int lo=0;
            int hi=m-1;
            while(lo<=hi){
                int mid=lo+(hi-lo)/2;
                if(nums[mid]>queries[i]) hi=mid-1;
                else{
                    maxlen=mid+1;
                    lo=mid+1;
                }
            }
            ans[i]=maxlen;
        }
        return ans; //complete TC=O(n*m + mlogm) = O(m*(n+logn))~=O(m*n) to be more optimised we can use Binary search as we are sorting the given arr
        
    }
};