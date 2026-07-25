class NodeValue {
public:
    int minNode;
    int maxNode;
    int sum;

    NodeValue(int minNode, int maxNode, int sum) {
        this->minNode = minNode;
        this->maxNode = maxNode;
        this->sum = sum;
    }
};

class Solution {
    int ans = 0;

    NodeValue helper(TreeNode* root) {
        if (root == NULL) {
            return NodeValue(INT_MAX, INT_MIN, 0);
        }

        NodeValue left = helper(root->left);
        NodeValue right = helper(root->right);

        if (left.maxNode < root->val && root->val < right.minNode) {

            int sum = left.sum + root->val + right.sum;

            ans = max(ans, sum);

            return NodeValue(min(root->val, left.minNode),max(root->val, right.maxNode),sum);
        }
        return NodeValue(INT_MIN, INT_MAX, 0);
    }
public:
    int maxSumBST(TreeNode* root) {
        helper(root);
        return ans;
    }
};