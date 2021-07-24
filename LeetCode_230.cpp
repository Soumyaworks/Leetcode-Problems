void traverse(TreeNode* root,int k,int &count,int &ans){
    if(root==NULL)
        return;
        traverse(root->left,k,count,ans);
        count++;
        if(count==k)
        ans=root->val;
        traverse(root->right,k,count,ans);

    }
    int kthSmallest(TreeNode* root, int k) {
        int ans,count=0;
        traverse(root,k,count,ans);
        return ans;
    }
