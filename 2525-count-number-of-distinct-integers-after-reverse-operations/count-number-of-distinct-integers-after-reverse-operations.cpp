class Solution {
public:
    int reverse(int n){
        int r=0;
        while(n>0){
            r=(r*10)+(n%10);
            n/=10;
        }
        return r;
    }
    int countDistinctIntegers(vector<int>& nums) {
        int n=nums.size();
        //to reverse each ele of nums and push back to it
        for(int i=0;i<n;i++){
            int rev=reverse(nums[i]);
            nums.push_back(rev);
        }
        //now for distinct ele convert this nums to a set
        unordered_set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        return s.size();
        
    }
};