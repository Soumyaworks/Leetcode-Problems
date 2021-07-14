vector<int> findPeakGrid(vector<vector<int>>& mat) {
        if(mat.empty())
            return vector<int>();
        int n=mat.size(),m=mat[0].size();
        vector<int>ans(2);
        int mid,l=0,r=m-1,i;
        int maxele=INT_MIN;
        while(l<=r){
            mid=(l+r)/2;
            
            for(i=0;i<n;i++){
                if(maxele<mat[i][mid]){
                    maxele=mat[i][mid];
                    ans[0]=i;
                    ans[1]=mid;
                }
            }
            if(maxele>=mat[ans[0]][max(0,mid-1)] && maxele>=mat[ans[0]][min(m-1,mid+1)])
                return ans;
            else if(maxele<=mat[ans[0]][max(0,mid-1)]){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
            
        }
        return ans;
    }
