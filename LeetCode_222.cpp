int countNodes(TreeNode *root) {
        if(root == NULL) return 0;
        
        int left = getHeightLeft(root);
        int right = getHeightRight(root);
        
        //If left and right are equal it means that the tree is complete and hence go for 2^h -1.
        if(left == right) return ((2<<(left)) -1);
            
        //else recursively calculate the number of nodes in left and right and add 1 for root.
        else return countNodes(root->left)+ countNodes(root->right)+1;
    }
    
    
    int getHeightLeft(TreeNode *root){
        int count=0;
        while(root->left!=NULL){
            count++;
            root = root->left;
        }
        return count;
    }
    
    
    int getHeightRight(TreeNode *root){
        int count=0;
        while(root->right!=NULL){
            count++;
            root = root->right;
        }
        return count;
    }
