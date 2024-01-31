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
    TreeNode* invertTree(TreeNode* root) {

        // create temp left
        // create temp right
        // make root->right = templeft
        // make root->left = tempright
        if ( root!=nullptr ){

        TreeNode* templeft = root -> left;
        TreeNode* tempright = root -> right; 
        // recursion invertTree(right)
        // recursion invertTree(left)
        root -> right = templeft;
        root -> left = tempright;
        invertTree(root->right);
        invertTree(root->left);
        
        }

        return root;
        
    }
};

