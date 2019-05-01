vector<int> preorderTraversal(TreeNode* root) {
    if(!root) return {};
    vector<int> ans;
    stack<TreeNode*> s;
    TreeNode* p=root;
    while(p||!s.empty()){
        while(p){
            ans.push_back(p->val);
            s.push(p);
            p=p->left;
        }
        if(!s.empty()){
            p=s.top();
            s.pop();
            p=p->right;
        }
    }
    return ans;
}
