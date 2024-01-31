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
    int maxi = 0;
    int death(TreeNode* root,int count){
        if(root == nullptr){
            maxi = max(count,maxi);
            return 0;
        }
        count++;
        death(root -> left,count);
        death(root -> right,count);
        return 0;
    }
    int maxDepth(TreeNode* root) {

        death(root,0);
        

        return maxi;
    }
};