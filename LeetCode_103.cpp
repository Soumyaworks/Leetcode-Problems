vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL)
            return ans;
        int level=0;
        queue<TreeNode*>Q;
        Q.push(root);
        vector<int>v;
        v.push_back(root->val);
        ans.push_back(v);
        while(!Q.empty()){
            int count=Q.size();
            level++;
            v.clear();
            while(count>0){
                TreeNode* temp=Q.front();
                Q.pop();
                if(temp->left){
                    Q.push(temp->left);
                    v.push_back(temp->left->val);
                }
                if(temp->right){
                    Q.push(temp->right);
                    v.push_back(temp->right->val);
                }
                count--;
            }
            if(!v.empty()){
            if(level%2!=0){
                reverse(v.begin(),v.end());
                ans.push_back(v);
            }
            else{
                ans.push_back(v);
            }
            }
        }
        return ans;
    }
