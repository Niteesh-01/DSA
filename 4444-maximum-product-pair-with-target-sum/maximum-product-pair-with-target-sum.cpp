class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        int n=nums.size();

        vector<pair<int,int>> arr;

        for(int i=0;i<n;i++){
            arr.push_back({nums[i],i});
        }

        sort(arr.begin(),arr.end());

        vector<int> ans={-1,-1};
        long long maxProduct=LLONG_MIN;

        int left=0,right=n-1;

        while(left<right){
            long long sum=(long long)arr[left].first + arr[right].first;

            if (sum==target && arr[right].first>arr[left].first){
                long long product=arr[left].first*arr[right].first;

                if (product>maxProduct){
                    maxProduct=product;
                    ans={arr[right].second,arr[left].second};
                }
                left++;
                right--;
            }
            else if(sum<target){
                left++;
            }
            else{
                right--;
            }
        }

        return ans;
    }
};