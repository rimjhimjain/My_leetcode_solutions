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


    vector <int > submit;
    int height(TreeNode* root , int count){
        if(root == nullptr){
            submit.push_back(count);
        return 0;
        }
        count+=1;
        height(root -> left , count);
        height(root -> right , count);

        return 0;

    }



    int maxDepth(TreeNode* root) {


        height(root , 0);

       

       return *max_element(submit.begin(),submit.end());
    }
};