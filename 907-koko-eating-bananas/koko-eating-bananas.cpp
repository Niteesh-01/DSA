class Solution {
public:
    long long check(vector<int> piles,int s){
        long long count=0;
        for(int i=0;i<piles.size();i++){
            if(piles[i]%s==0) count+=piles[i]/s;
            else count+=piles[i]/s + 1;
        }
        return count;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int l=1,high=*max_element(piles.begin(), piles.end());
        
        while(l<=high){
            long time=0;
            int mid=l+(high-l)/2;
            time=check(piles,mid);
            if(time>h) l=mid+1;
            else high=mid-1;
            //else return mid;
        }
        return l;
    }
};