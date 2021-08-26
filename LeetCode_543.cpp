int findmaxpath(int &ans,TreeNode *root){
        if(root!=NULL){
            int lr=findmaxpath(ans,root->left);
            int rr=findmaxpath(ans,root->right);
            ans=max(ans,lr+rr);
            //findmaxpath(ans,root->left);
            //findmaxpath(ans,root->right);
            return 1+max(lr,rr);
        }
        else
            return 0;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)
            return 0;
        //if(!root->left && !root->right)
            //return 0;
        else{
            int ans=0;
            findmaxpath(ans,root);
            return ans;
        }
    }
