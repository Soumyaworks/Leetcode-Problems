void traversepath(TreeNode* root,vector<TreeNode*>&ans,vector<TreeNode*>&temp,TreeNode* t){
        if(root==NULL)
            return;
        temp.push_back(root);
        if(root==t)
            ans=temp;
        traversepath(root->left,ans,temp,t);
        traversepath(root->right,ans,temp,t);
        temp.pop_back();
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL)
            return root;
        vector<TreeNode*>temp,path1,path2,ans;
        traversepath(root,ans,temp,p);
        path1=ans;
        ans.clear();
        temp.clear();
        traversepath(root,ans,temp,q);
        path2=ans;
        if(path1.empty() || path2.empty())
            return NULL;
        int i;
        for(i=0;i<path1.size() && i<path2.size();i++){
            if(path1[i]!=path2[i])
                return path1[i-1];
        }
        return path1[i-1];
    }
