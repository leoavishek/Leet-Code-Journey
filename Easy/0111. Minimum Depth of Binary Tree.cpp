class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        if(root->left==NULL and root->right==NULL)
            return 1;
        if(root->left==NULL)
            return minDepth(root->right)+1;
        if(root->right==NULL)
            return minDepth(root->left)+1;
        int leftDepth=minDepth(root->left);
        int rightDepth=minDepth(root->right);
        return min(leftDepth,rightDepth)+1;
    }
};