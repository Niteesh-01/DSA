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
    int minDepth(TreeNode* root) {
        //BFS
        // int level=0;
        // if(!root) return level;
        // queue<TreeNode*> q;
        // q.push(root);
        // level++;

        // while(!q.empty()){
        //     int n=q.size();
        //     while(n--){
        //         TreeNode* temp=q.front();
        //         q.pop();
        //         if(!temp->left and !temp->right) return level;
        //         if(temp->left) q.push(temp->left);
        //         if(temp->right) q.push(temp->right);
        //     }
        //     level++;
        // }
        // return -1;

        //DFS
        if(!root) return 0;

        if(root->left==NULL and root->right==NULL) return 1;

        int L=root->left!=NULL ? minDepth(root->left) : INT_MAX;
        int R=root->right!=NULL ? minDepth(root->right) : INT_MAX;

        return 1+min(L,R);
    }
};