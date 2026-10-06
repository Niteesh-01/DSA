class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int sum=0,n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
            sum=sum%p;
        }
        int t=sum%p;
        if(t==0) return 0;
        // else{
        //     int i=0,j=0,s=0,count=INT_MAX;
        //     while(i<=j && j<n){
        //         s+=nums[j];
        //         while(s>sum & i<=j){
        //             s-=nums[i];
        //             i++;
        //         }
        //         if(s==sum){
        //             count=min(count,j-i+1);
        //         }
        //         j++;
        //     }
        //     if(count<n) return count;
        // }
        // return -1;   

        unordered_map<int,int> m;
        int curr=0,res=n;
        m[0]=-1;

        for(int i=0;i<n;i++){
            curr=(curr+nums[i]) %p;
            int rem=(curr-t+p)%p;
            if(m.find(rem)!=m.end()){
                res=min(res,i-m[rem]);
            }
            m[curr]=i;
        }
        return (res==n)?-1 : res;
    }
};