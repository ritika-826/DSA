class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<int> ans;
        for(int d=0;d<m+n-1;d++){
            if(d%2==0){
                //start from bottom
                int row=min(d,m-1);
                int col=d-row;
                //move ^
                while(row>=0 && col<n){
                    ans.push_back(mat[row][col]);
                    row--;
                    col++;
                }
            }
            else{
                //start from top
                int col=min(d,n-1);
                int row=d-col;
                // down
                while(col>=0 && row<m){
                    ans.push_back(mat[row][col]);
                    row++;
                    col--;
                }
            }
        }
        return ans;
    }
};