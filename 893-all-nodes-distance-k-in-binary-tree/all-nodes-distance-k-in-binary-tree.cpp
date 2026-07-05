class Solution {
    void markParents(TreeNode* root ,unordered_map<TreeNode* ,TreeNode*> &parent_track , TreeNode* target){
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* current = q.front();
            q.pop();

            if(current->left){
           parent_track[current->left] = current;
            q.push(current->left);
            }
            if(current->right){
                 parent_track[current->right] = current;
            q.push(current->right);
            }
        }
    }
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode* , TreeNode*> parent_track;
        markParents(root , parent_track , target);
        unordered_map<TreeNode* , bool> visited;
        queue<TreeNode*> q;
        q.push(target);
        visited[target] = true;
        int cur_level = 0;
        while(!q.empty()){
            int n = q.size();
            if(cur_level++ == k) break;
            for(int i=0;i<n;i++){
                TreeNode* current = q.front();
                q.pop();
                if(current->left && !visited[current->left]) q.push(current->left);
                visited[current->left] = true;
                if(current->right && !visited[current->right]) q.push(current->right);
                visited[current->right] = true;
                if(parent_track[current] && !visited[parent_track[current]])
                q.push(parent_track[current]);
                visited[parent_track[current]] = true;
            }
        }
        vector<int> result;
        while(!q.empty()){
          TreeNode* current = q.front();
          q.pop();
          result.push_back(current->val);
        }
          return result;
    }
};