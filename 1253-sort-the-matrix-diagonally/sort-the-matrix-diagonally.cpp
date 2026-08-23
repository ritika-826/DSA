class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        // every row from first col
        for(int r=0;r<m;r++){
        vector<int> temp;
        int i=r;
        int j=0;

        //collect diagonal
        while(i<m && j<n){
            temp.push_back(mat[i][j]);
            i++;
            j++;
        }
        sort(temp.begin(),temp.end());
        i=r;
        j=0;
        int k=0;
        while(i<m && j<n){
            mat[i][j]=temp[k];
            i++;
            j++;
            k++;
        }
        }
        // every col from first row
    for(int c=0;c<n;c++){
        vector<int> temp;
        int i=0;
        int j=c;

        //collect diagonal
        while(i<m && j<n){
            temp.push_back(mat[i][j]);
            i++;
            j++;
        }
        sort(temp.begin(),temp.end());
        i=0;
        j=c;
        int k=0;
        while(i<m && j<n){
            mat[i][j]=temp[k];
            i++;
            j++;
            k++;
        }
    }
    
    return mat;
    }
    
};