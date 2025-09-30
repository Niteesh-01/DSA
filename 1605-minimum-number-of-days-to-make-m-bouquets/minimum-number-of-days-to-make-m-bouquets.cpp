class Solution {
public:
    bool canMake(vector<int>& bloomDay,int m,int k,int day){
        int bouquets=0,flower=0;
        for(int b:bloomDay){
            if(b<=day){
                flower++;
                if(flower==k){
                    bouquets++;
                    flower=0;
                }
            }
            else flower=0;
        }
        return bouquets>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long total=1LL*k*m;
        if(bloomDay.size()<total) return -1;
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(canMake(bloomDay,m,k,mid)){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};