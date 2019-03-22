/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> res;
    vector<int> path;
    void helper(TreeNode* root, int sum){
        if(!root->left&&!root->right)
            if(sum==0) res.push_back(path);
        if(root->left){
            path.push_back(root->left->val);
            helper(root->left,sum-root->left->val);
            path.pop_back();
        }
        if(root->right){
            path.push_back(root->right->val);
            helper(root->right,sum-root->right->val);
            path.pop_back();
        }
    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        if(!root) return res;
        path.push_back(root->val);
        helper(root,sum-root->val);
        return res;
    }
};
