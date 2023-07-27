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
    int solve(TreeNode* root){
        int lh,rh,diff;
        if(root==NULL)
            return 0;
        int leftHeight=solve(root->left);
        int rightHeight=solve(root->right);
        
        if(leftHeight==-1 || rightHeight==-1)
            return -1;
        if(abs(leftHeight-rightHeight)>1)
            return -1;
        return max(leftHeight,rightHeight)+1;
    }
        
        bool isBalanced(TreeNode* root) {
              return solve(root)!=-1;
        }
};

