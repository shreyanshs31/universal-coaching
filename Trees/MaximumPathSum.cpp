#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
public:
    int ans = INT_MIN;
    int maxPathSum(TreeNode* root) {
        helper(root);
        return ans;
    }
    int helper(TreeNode *node){
        if(node == nullptr) {
            return;
        }
        int left = helper(node->left);
        int right = helper(node->right);
        left = max(0, left);
        right = max(0, right);
        int pathSum = left + right + node->val;
        ans = max(ans, pathSum);
        return max(left, right) + node->val;
    }
};