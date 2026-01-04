class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            vector<int> v;
            int count=0,sum=0;
            int a=1;
            while(a*a<=nums[i]){
                if(nums[i]%a==0){
                    v.push_back(a);
                    count++;
                    if(nums[i]/a!=a){
                        v.push_back(nums[i]/a);
                        count++;
                    }
                }
                a++;
            }
            if(count==4){
                for(int i=3;i>=0;i--){
                    sum+=v[i];
                }
                ans.push_back(sum);
            }
        }
        int ansum=0;
        for(int i=0;i<ans.size();i++){
            ansum+=ans[i];
        }
        return ansum;
    }
};