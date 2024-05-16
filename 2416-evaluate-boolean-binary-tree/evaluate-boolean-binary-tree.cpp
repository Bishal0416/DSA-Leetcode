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
    bool evaluateTree(TreeNode* root) {

        if(root->left == NULL && root->right == NULL){
            return root->val;
        }

        bool val1 = evaluateTree(root->left);
        bool val2 = evaluateTree(root->right);

        return root->val == 2 ? val1 || val2 : val1 && val2;
    }
};