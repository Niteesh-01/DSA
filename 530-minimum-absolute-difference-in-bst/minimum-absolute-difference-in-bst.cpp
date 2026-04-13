/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void solve(TreeNode* root,vector<int>&nums){
        if(!root) return;

        solve(root->left,nums);
        nums.push_back(root->val);
        solve(root->right,nums);
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int>nums;
        solve(root,nums);
        int minDiff=INT_MAX;
        for(int i=0;i<nums.size()-1;i++){
            minDiff=min(minDiff,abs(nums[i]-nums[i+1]));
        }
        return minDiff;
    }
};