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
    int helper(TreeNode* root,int &maxi){
        if(root==NULL) return 0;
        int lsum=max(0,helper(root->left,maxi));
        int rsum=max(0,helper(root->right,maxi));
        maxi=max(maxi,lsum+rsum+root->val);
        return max(lsum,rsum) + root->val;

    }
    int maxPathSum(TreeNode* root) {
        if(root==NULL) return 0;
        int maxi=INT_MIN;
        helper(root,maxi);
        return maxi;

    }
};