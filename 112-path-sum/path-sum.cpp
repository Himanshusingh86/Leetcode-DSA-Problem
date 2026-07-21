class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {

        if (root == NULL)
            return false;

        // Check if this is a leaf node
        if (root->left == NULL && root->right == NULL) {
            return targetSum == root->val;
        }

        targetSum -= root->val;

        return hasPathSum(root->left, targetSum) ||
               hasPathSum(root->right, targetSum);
    }
}; 