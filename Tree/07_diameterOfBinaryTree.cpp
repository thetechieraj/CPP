class Solution {
public:
    int diameter;

    int levels(TreeNode* root){
        if(root == NULL) return 0;

        int left = levels(root->left);
        int right = levels(root->right);
        diameter = max(diameter, left+right);
        return 1 + max(left, right);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        diameter = 0;

        levels(root);

        return diameter;
    }
};