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
    int maxDia=0;
    int helper(TreeNode* root){
        if(root==nullptr) return 0;
        int dia=Levels(root->left) + Levels(root->right);
        maxDia=max(dia,maxDia);
        helper(root->left);
        helper(root->right);
        return maxDia;
    }
    int Levels(TreeNode* root){
        if(root==nullptr) return 0;
        return 1 + max(Levels(root->left),Levels(root->right));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        maxDia=0;
        return helper(root);
    }
};