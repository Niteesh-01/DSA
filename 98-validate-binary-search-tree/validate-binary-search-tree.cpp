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

    bool check(TreeNode* root,long lr,long ur){
        if(!root) return true;
        if(root->val<=lr || root->val >= ur) return false;

        return check(root->left,lr,root->val) && check(root->right,root->val,ur);
    }

public:
    bool isValidBST(TreeNode* root) {
        if(!root) return true;
        if(!root->left && !root->right) return true;
        
        return check(root,LONG_MIN,LONG_MAX);
    }
};