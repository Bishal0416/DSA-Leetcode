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
    bool calculate(TreeNode* root){

        if(root->left == NULL && root->right == NULL){
            return root->val;
        }

        bool val1 = calculate(root->left);
        bool val2 = calculate(root->right);

        return root->val == 2 ? val1 || val2 : val1 && val2;
    } 
    bool evaluateTree(TreeNode* root) {
        bool res = calculate(root);
        return res;
    }
};