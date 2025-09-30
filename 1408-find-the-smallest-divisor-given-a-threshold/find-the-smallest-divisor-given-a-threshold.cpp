class Solution {
public:
     long long sumAfterDivisor(const vector<int>& nums, int d) {
        long long s = 0;
        for (int x : nums) {
            // ceil(x / d) = (x + d - 1) / d
            s += (x + d - 1) / d;
        }
        return s;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l = 1;
        int r = *max_element(nums.begin(), nums.end());
        int ans = r;  // initialize answer to the maximum possible
        
        while (l <= r) {
            int mid = l + (r - l) / 2;
            long long s = sumAfterDivisor(nums, mid);
            
            if (s <= threshold) {
                ans = mid;      
                r = mid - 1;
            } else {
                l = mid + 1;   
            }
        }
        return ans;
    }
};