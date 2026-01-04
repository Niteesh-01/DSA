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
    void solve(vector<vector<int>>& ans,vector<int>& combo,TreeNode* root,int target){
        if(root==NULL) return;
        combo.push_back(root->val);
        target-=root->val;
        if(target==0 && root->left==NULL && root->right==NULL) {
            ans.push_back(combo);
        }
        else{
            solve(ans,combo,root->left,target);
            solve(ans,combo,root->right,target);
        }
        combo.pop_back(); 
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> combo;
        solve(ans,combo,root,targetSum);
        return ans;
    }
};