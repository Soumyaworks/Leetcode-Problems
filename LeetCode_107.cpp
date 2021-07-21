vector<vector<int>> levelOrderBottom(TreeNode* root) {
        stack<vector<int>>st;
        vector<vector<int>>ans;
        if(root==NULL)
            return ans;
        queue<TreeNode*>Q;
        Q.push(root);
        vector<int>temp;
        temp.push_back(root->val);
        st.push(temp);
        //temp.clear();
        while(!Q.empty()){
            int count=Q.size();
            temp.clear();
            while(count>0){
                TreeNode* node=Q.front();
                Q.pop();
                if(node->left){
                    Q.push(node->left);
                    temp.push_back(node->left->val);
                }
                if(node->right){
                    Q.push(node->right);
                    temp.push_back(node->right->val);
                }
                count--;
            }
            if(!temp.empty())
                st.push(temp);
            
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
