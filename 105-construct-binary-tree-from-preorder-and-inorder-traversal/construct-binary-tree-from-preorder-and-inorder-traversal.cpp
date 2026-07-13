class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int , int> inMap;
        for(int i=0;i<inorder.size();i++){
            inMap[inorder[i]] = i;
        }
            TreeNode* root = buildTree(preorder , 0 , preorder.size()-1 , inorder , 0 , inorder.size()-1,inMap);

         return root;
    }

         TreeNode* buildTree(vector<int>& preorder, int prestart, int preEnd, vector<int>& inorder , int instart , int inEnd,map<int , int>&inMap){
            if(prestart > preEnd || instart > inEnd) return NULL;

            TreeNode* root  = new TreeNode (preorder[prestart]);
             int inRoot = inMap[root->val];
             int numsleft = inRoot - instart;

              root->left = buildTree(preorder , prestart + 1 , prestart + numsleft,inorder , instart , inRoot-1, inMap);
              root->right = buildTree(preorder , prestart + numsleft + 1, preEnd , inorder , inRoot+1,inEnd,inMap);

              return root;
         }
};