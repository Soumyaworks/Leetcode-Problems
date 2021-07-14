int numIslands(vector<vector<char>>& grid) {
        if(grid.empty())
            return 0;
        queue<pair<int,int>>Q;
        int count=0;
        int i,j,n=grid.size(),m=grid[0].size();
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    Q.push({i,j});
                    grid[i][j]='0';
                    while(!Q.empty()){
                        int x=Q.front().first;
                        int y=Q.front().second;
                        Q.pop();
                        if(x-1>=0 && grid[x-1][y]=='1'){
                            grid[x-1][y]='0';
                            Q.push({x-1,y});
                        }
                        if(x+1<n && grid[x+1][y]=='1'){
                            grid[x+1][y]='0';
                            Q.push({x+1,y});
                        }
                        if(y-1>=0 && grid[x][y-1]=='1'){
                            grid[x][y-1]='0';
                            Q.push({x,y-1});
                        }
                        if(y+1<m && grid[x][y+1]=='1'){
                            grid[x][y+1]='0';
                            Q.push({x,y+1});
                        }
                    }
                    count++;
                }
            }
        }
        return count;
    }
