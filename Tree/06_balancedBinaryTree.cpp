class Solution {         // TC = O(n*n)
public:
    int levels(TreeNode* root){
        if(root == NULL) return 1;

        return 1 + max(levels(root->left), levels(root->right));
    }

    bool isBalanced(TreeNode* root) {
        if(root == NULL) return true;
        if(abs(levels(root->left) - levels(root->right)) > 1) return false;

        return isBalanced(root->left) && isBalanced(root->right);
    }
};



// Optimised Solution with O(n)

class Solution {
public:
    bool ans;

    int levels(TreeNode* root){
        if(root == NULL) return 0;
        
        int left = levels(root->left);
        int right = levels(root->right);

        if(abs(left-right) > 1) ans = false;  //Important 

        return 1 + max(left, right);
    }

    bool isBalanced(TreeNode* root) {
        ans = true;

        levels(root);

        return ans;
    }
};