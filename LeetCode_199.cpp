vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        if(root==NULL)
            return ans;
        queue<TreeNode*>Q;
        int k;
        Q.push(root);
        ans.push_back(root->val);
        while(!Q.empty()){
            int count=Q.size();
            //k=-1;
            while(count>0){
                TreeNode* temp=Q.front();
                Q.pop();
                if(temp->left){
                    k=temp->left->val;
                    Q.push(temp->left);
                }
                if(temp->right){
                    k=temp->right->val;
                    Q.push(temp->right);
                }
                count--;
            }
            if(!Q.empty())
            ans.push_back(k);
        }
        return ans;
    }
