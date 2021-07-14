bool isCompleteTree(TreeNode* root) {
        if(root==NULL)
            return true;
        int level=0,count=0;
        int findnull=0;
        queue<TreeNode*>Q;
        Q.push(root);
        while(!Q.empty()){
            count=Q.size();          
            level++;
            while(count>0){
                TreeNode* temp=Q.front();
                Q.pop();
                //f1=0,f2=0;
                if(temp->left){
                    //f2++;
                    Q.push(temp->left);
                    if(findnull==1)
                        return false;
                    //f1=1;
                    //l++;
                }
                else{
                    //f2++;
                    //f3++;
                    if(findnull==0){
                        findnull=1;
                        //l=level;
                        //f1=f2;
                    }
                }
                if(temp->right){
                    //f2++;
                    Q.push(temp->right);
                    if(findnull==1)
                        return false;
                    //f2=1;
                    //r++;
                }
                else{
                    //f2++;
                    //f3++;
                     if(findnull==0){
                        findnull=1;
                        //l=level;
                        //f1=f2;
                    }
                }
                //if(f1==0 && f2==1)
                    //return false;
                count--;
                //if(r>l && count!=0)
                    //return false;
            }
            
                //return false;
        }
        return true;
    }
