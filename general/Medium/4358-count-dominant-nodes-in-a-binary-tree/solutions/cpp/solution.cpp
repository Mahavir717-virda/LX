
// struct TreeNode {
//     int val;
//     TreeNode* left;
//     TreeNode* right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode* left, TreeNode* right)
//         : val(x), left(left), right(right) {}
// };
class Solution {
public:
    int dominant_count = 0;
    int dfs(TreeNode* root) {
        if (!root)
            return INT_MIN;
        int leftMax = dfs(root->left);
        int rightMax = dfs(root->right);

        int subTreeMax = max({root->val, leftMax, rightMax});

        if (root->val == subTreeMax)
            dominant_count++;

        return subTreeMax;
    }

    int countDominantNodes(TreeNode* root) {
        dfs(root);
        cout << dominant_count;
        return dominant_count;
    }
};