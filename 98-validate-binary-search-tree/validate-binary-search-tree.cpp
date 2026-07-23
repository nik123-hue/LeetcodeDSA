class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return isValidBST(root,LONG_MIN,LONG_MAX);
    }
    public:
     bool isValidBST(TreeNode *root,long minVal,long maxVal){
        if(root==NULL) return true;
        if(root->val >= maxVal || root->val <= minVal) return false;
        return isValidBST(root->left,minVal,root->val) && isValidBST(root->right,root->val,maxVal);
    }
};