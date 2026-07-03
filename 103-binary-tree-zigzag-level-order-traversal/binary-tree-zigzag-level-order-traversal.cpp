class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root==NULL) return result;
        queue<TreeNode* > nodesQueue;
        nodesQueue.push(root);
        bool leftToRight = true;

        while(!nodesQueue.empty()){
            int n = nodesQueue.size();
            vector<int> row(n);
            for(int i=0; i<n; i++){
                TreeNode* node = nodesQueue.front();
                nodesQueue.pop();
                int index = (leftToRight)? i : (n-1-i);
               row[index] = node->val;
               if(node->left) nodesQueue.push(node->left);
               if(node->right) nodesQueue.push(node->right);
            }
            leftToRight = !leftToRight;
            result.push_back(row);
        }
        return result;
        
    }
};