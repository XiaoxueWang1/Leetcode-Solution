vector<int> postorderTraversal(TreeNode* root) {
    if(!root) return {};
    vector<int> ans;
    map<TreeNode*,bool> visited;
    stack<TreeNode*> s;
    TreeNode* p=root;
    while(p||!s.empty()){
        while(p){
            s.push(p);
            p=p->left;
        }
        if(!s.empty()){
            p=s.top();
            s.pop();
            if(p->right && !visited[p->right]){
                s.push(p);
                p=p->right;
            }
            else{
                ans.push_back(p->val);
                visited[p]=true;
                p=NULL;

            }
        }
    }
    return ans;
}
