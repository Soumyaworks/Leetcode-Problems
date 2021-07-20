void rotate(vector<int>&v,int k){
        int n=v.size();
        k=k%n;
        rev(v,0,k-1);
        rev(v,k,n-1);
        rev(v,0,n-1);
    }
    void rev(vector<int>&v,int s,int e){
        while(s<e){
            swap(v[s],v[e]);
            s++;
            e--;
        }
    }
    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size(),n=grid[0].size();
        int r1=0,r2=m-1,c1=0,c2=n-1,i;
        while(r1<=r2 && c1<=c2){
            vector<int>v;
            for(i=c1;i<c2;i++)
                v.push_back(grid[r1][i]);
            for(i=r1;i<r2;i++)
                v.push_back(grid[i][c2]);
            for(i=c2;i>c1;i--)
                v.push_back(grid[r2][i]);
            for(i=r2;i>r1;i--)
                v.push_back(grid[i][c1]);
            rotate(v,k);
            int j=0;
            for(i=c1;i<c2;i++)
                grid[r1][i]=v[j++];
            for(i=r1;i<r2;i++)
                grid[i][c2]=v[j++];
            for(i=c2;i>c1;i--)
                grid[r2][i]=v[j++];
            for(i=r2;i>r1;i--)
                grid[i][c1]=v[j++];
            r1++;
            r2--;
            c1++;
            c2--;
        }
        return grid;
    }
