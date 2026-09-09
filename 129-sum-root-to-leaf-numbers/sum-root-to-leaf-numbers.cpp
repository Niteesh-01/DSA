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
    void solve(TreeNode* root, string &t, int &s) {
        if (!root) return;

        t.push_back('0' + root->val);

        if (!root->left && !root->right) {
            s += stoi(t);
            t.pop_back();
            return;
        }

        solve(root->left, t, s);
        solve(root->right, t, s);

        t.pop_back();
    }

    int sumNumbers(TreeNode* root) {
        int sum = 0;
        string t = "";
        solve(root, t, sum);
        return sum;
    }
};