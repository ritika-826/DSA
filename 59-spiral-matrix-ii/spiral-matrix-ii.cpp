class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> arr(n,vector<int> (n,0));
        int r=0;
        int c=0;
        int dir=0;
        int dr[]={0,1,0,-1};
        int dc[]={1,0,-1,0};
        for(int i=1;i<=n*n;i++){
            arr[r][c]=i;
            int nr=r+dr[dir];
            int nc=c+dc[dir];
            if(nr < 0 || nr >=n || nc <0 || nc >=n || arr[nr][nc]!=0){
                dir=(dir+1)%4;
                
            }
            r=r+dr[dir];
            c=c+dc[dir];

        }

        return arr;
        
    }
};