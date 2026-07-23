class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // //brute force approach
        // int n=nums.size();
        // int count=0;
        // for(int i=0;i<n;i++){
        //     int sum=0;
        //     for(int j=i;j<n;j++){
        //         sum+=nums[j];
        //         if(sum==k) count++;
        //     }
        // }
        // return count;

        //optimal solution using prefix sum and hash map
        map<int,int> m;
        m[0]=1;
        int psum=0,cnt=0;
        for(int i=0;i<nums.size();i++){
            psum+=nums[i];
            int remove=psum-k;
            cnt+=m[remove];
            m[psum]+=1;
        }
        return cnt;
    }
};