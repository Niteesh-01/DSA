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
    void find(TreeNode* root,long long& m1,long long &m2){
        if(!root) return;
        if(root->val<m1) m1=root->val;
        if(root->val>m1 && root->val<m2) m2=root->val;

        find(root->left,m1,m2);
        find(root->right,m1,m2);
    }

    int findSecondMinimumValue(TreeNode* root) {
        long long mn1=LLONG_MAX, mn2=LLONG_MAX;
        find(root,mn1,mn2);
        return mn2==LLONG_MAX ? -1 : mn2;
    }
};