/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool exist(TreeNode* root,TreeNode* target){
        if(root==nullptr) return false;
        if(root==target) return true;
        return exist(root->left,target) || exist(root->right,target); //if root target ke equal nii h to hme left right dono check krna hoga thats why or condition
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==p || root==q) return root;//means agr root hi p ya q hua then return it
        else if(exist(root->left , p)==true && exist(root->right , q)) return root; //means jis root pe h agr uske left me p and right me q h the return it
        else if(!exist(root->left , p)==true && !exist(root->right , q)) return root; //means p left me nii h ar q right me nii h that means p right me h q left me h
       else if(exist(root->left,p) && !exist(root->right,q)) return lowestCommonAncestor(root->left,p,q); //recursion on left side
       else return lowestCommonAncestor(root->right,p,q); // that is if(!exist(root->left,p) && exist(root->right,q))
    }
};