class Solution {
public:
    vector<int> ans;
    void postorder(TreeNode* root){
        if(root==NULL) return;
        postorder(root->left);
        postorder(root->right);
        ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        postorder(root);
        return ans;
        
    }
};