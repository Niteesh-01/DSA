class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }

        int x=1;
        while(true){
            if(s.find(k*x)==s.end()) return k*x;
            x++;
        }
    }
};