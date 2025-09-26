class Solution {
public:
    int rev(int a){
        int r=0;
        while(a>0){
            r=(r*10)+(a%10);
            a/=10;
        }
        return r;
    }
    // int fact(int n){
    //     int f=1; //range problem make long long
    //     while(n>0){
    //         f*=n;
    //         n-=1;
    //     }
    //     return f;
    // }
    // int combi(int n,int r){
    //     int nCr=fact(n)/(fact(r)*fact(n-r));
    //     return nCr;
    // }
    int countNicePairs(vector<int>& nums) {
        //brute force approach  time limit exceeded thats why we need hashing
        int n=nums.size();
        int count=0;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            nums[i]=nums[i]-rev(nums[i]);
        }
        for(int i=0;i<n;i++){
            if(m.find(nums[i])!=m.end()){
                count=count%1000000007;
                count+=m[nums[i]];
            }
            m[nums[i]]++;
        }
        // for(auto x:m){
        //     int f=x.second;
        //     count+=combi(f,2);
        // }

        // for(int i=0;i<n-1;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]+rev(nums[j])==rev(nums[i])+nums[j]) count++; 
        //         //instead this check nums[i]-rev(nums[i])==nums[j]-rev(nums[j])
          //so make nums[i]=nums[i]-rev(nums[i]) and then use map to count freq then count +=nCr n->freq r=2 2 ka pair chahiye
        //     }
        // }
        return count%1000000007;
    }
};