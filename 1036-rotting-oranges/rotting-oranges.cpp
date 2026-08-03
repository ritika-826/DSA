class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        queue<pair<int,int>> q;
        int fresh=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==1)fresh++;
                if(grid[i][j]==2){
                    q.push({i,j});
                }
            }
        }
        int minute=0;
        int dr[]={-1,1,0,0};
        int dc[]={0,0,-1,1};
        while(!q.empty()){
            int size=q.size();
            bool changed=false;
            for(int i=0;i<size;i++){
                auto node=q.front();
                q.pop();
                int r=node.first;
                int c=node.second;
                for(int k=0;k<4;k++){
                    
                    int nr=r+dr[k];
                    int nc=c+dc[k];
                     if(nr>=0 && nr<row &&
                        nc>=0 && nc<col &&
                        grid[nr][nc]==1
                        ){
                            grid[nr][nc]=2;
                            fresh--;
                            q.push({nr,nc});
                            changed=true;

                        }

                }


            }
            if (changed)
            minute++;
        }
        if(fresh>0) return -1;
        return minute;

    }
};