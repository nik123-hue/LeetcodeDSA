class BSTIterator {
    private : 
        stack<TreeNode *> myStack;
public:
    BSTIterator(TreeNode* root) {
        pushAll(root);
        
    }
    
    int next() {
        TreeNode* tmpNode = myStack.top();
        myStack.pop();
        pushAll(tmpNode->right);
        return tmpNode->val;
        
    }
    
    bool hasNext() {
        return !myStack.empty();
        
    }
    private :
    void pushAll(TreeNode* node){
        for(; node != NULL ;myStack.push(node),node = node->left);
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */