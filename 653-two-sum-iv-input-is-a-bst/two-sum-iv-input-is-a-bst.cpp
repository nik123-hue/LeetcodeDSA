class BSTIterator{
    stack<TreeNode*>myStack;
    bool reverse = true;
    public :
    BSTIterator(TreeNode* root , bool isreverse){
        reverse = isreverse;
        pushAll(root);
    }
    bool hasNext(){
        return !myStack.empty();
    }
    int next(){
        TreeNode* tmpNode = myStack.top();
        myStack.pop();
        if(!reverse) pushAll(tmpNode->right);
        else pushAll(tmpNode->left);
        return tmpNode->val;
    }
    private:
    void pushAll(TreeNode* node){
        for(;node != NULL;){
            myStack.push(node);
            if(reverse==true) node = node->right;
            else node = node->left;
        }
    }
};
class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        if(!root) return false;
        BSTIterator l(root,false);
        BSTIterator r(root,true);
        int i = l.next();
        int j = r.next();
        while(i<j){
            if(i+j==k) return true;
            else if(i+j < k) i = l.next();
            else j = r.next();
        }
        return false;
        
    }
};