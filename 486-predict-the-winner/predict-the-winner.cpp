class Solution {
public:
    int solve(int i,int j,vector<int>& v){
        if(i>j) return 0;
        if(i==j) return v[i];

        int take_i=v[i] + min(solve(i+2,j,v),solve(i+1,j-1,v));

        int take_j=v[j] + min(solve(i,j-2,v),solve(i+1,j-1,v));

        return max(take_i,take_j);
    }
    bool predictTheWinner(vector<int>& nums) {
        int t_sum=accumulate(nums.begin(),nums.end(),0);
        int p1_s=solve(0,nums.size()-1,nums);
        int p2_s=t_sum-p1_s;

        return p1_s>=p2_s;
    }
};