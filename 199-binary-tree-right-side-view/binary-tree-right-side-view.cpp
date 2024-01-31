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
    vector<int> ans;
    void dhundo(TreeNode* root, int level){
        if(root == NULL) return;

        if(ans.size() == level){
            ans.push_back(root -> val);
        }
        level++;
        dhundo(root -> right,level);
        dhundo(root -> left,level);
        return;
    }
    vector<int> rightSideView(TreeNode* root) {
        dhundo(root,0);
        return ans;
    }
};