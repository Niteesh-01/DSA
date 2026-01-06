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
    int maxLevelSum(TreeNode* root) {
        int lev=1;
        int max_lev;
        int max_sum=INT_MIN;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int temp_sum=0;
            int s=q.size();
            while(s--){
                TreeNode* temp=q.front();
                q.pop();
                temp_sum+=temp->val;
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            if(temp_sum>max_sum){
                max_sum=temp_sum;
                max_lev=lev;
            }
            lev++;
        }
        return max_lev;
    }
};