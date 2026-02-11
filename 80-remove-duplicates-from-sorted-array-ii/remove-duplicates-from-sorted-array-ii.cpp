class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int j=1 , count=1;
        while(j < nums.size()){
            if(nums[j]==nums[i]) count++;
            else{
                i=j;
                count=1;
            }
            if(count>2){
                nums.erase(nums.begin()+j);
                j--;
            }
            j++;
        }
        return nums.size();
    }
};