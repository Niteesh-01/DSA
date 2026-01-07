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
    long long totalSum = 0;
    long long maxProd = 0;
    const int MOD = 1e9 + 7;

    void dfsTotal(TreeNode* root) {
        if (!root) return;
        totalSum += root->val;
        dfsTotal(root->left);
        dfsTotal(root->right);
    }

    long long dfs(TreeNode* root) {
        if (!root) return 0;

        long long left = dfs(root->left);
        long long right = dfs(root->right);

        long long subSum = left + right + root->val;

        maxProd = max(maxProd, subSum * (totalSum - subSum));

        return subSum;
    }
    
    int maxProduct(TreeNode* root) {
        dfsTotal(root);
        dfs(root);
        return maxProd % MOD;
    }
};