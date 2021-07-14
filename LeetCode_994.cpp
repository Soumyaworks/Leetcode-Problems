int orangesRotting(vector<vector<int>>& grid) {
        if(grid.empty())
            return -1;
        int i,j,n=grid.size(),m=grid[0].size();
        queue<pair<int,int>>Q;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(grid[i][j]==2)
                    Q.push(make_pair(i,j));
            }
        }
        int timer=0;
        while(!Q.empty()){
            int count=Q.size();
            timer++;
            while(count>0){
                int x=Q.front().first;
                int y=Q.front().second;
                Q.pop();
                if(x-1>=0 && grid[x-1][y]==1){
                    grid[x-1][y]=2;
                    Q.push(make_pair(x-1,y));
                }
                if(x+1<n && grid[x+1][y]==1){
                    grid[x+1][y]=2;
                    Q.push(make_pair(x+1,y));
                }
                if(y-1>=0 && grid[x][y-1]==1){
                    grid[x][y-1]=2;
                    Q.push(make_pair(x,y-1));
                }
                if(y+1<m && grid[x][y+1]==1){
                    grid[x][y+1]=2;
                    Q.push(make_pair(x,y+1));
                }
                count--;
            }
            
        }
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(grid[i][j]==1)
                    return -1;
            }
        }
        return timer==0?0:timer-1;
    }
