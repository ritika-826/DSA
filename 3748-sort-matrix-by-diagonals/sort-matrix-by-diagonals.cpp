class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {

        int n = grid.size();

        // Diagonals starting from first column
        for(int r = 0; r < n; r++) {

            vector<int> temp;

            int i = r;
            int j = 0;

            // Collect diagonal
            while(i < n && j < n) {
                temp.push_back(grid[i][j]);
                i++;
                j++;
            }

            // Descending
            sort(temp.begin(), temp.end(), greater<int>());

            // Put back
            i = r;
            j = 0;

            int k = 0;

            while(i < n && j < n) {
                grid[i][j] = temp[k];

                i++;
                j++;
                k++;
            }
        }

        // Diagonals starting from first row
        for(int c = 1; c < n; c++) {

            vector<int> temp;

            int i = 0;
            int j = c;

            // Collect diagonal
            while(i < n && j < n) {
                temp.push_back(grid[i][j]);
                i++;
                j++;
            }

            // Ascending
            sort(temp.begin(), temp.end());

            // Put back
            i = 0;
            j = c;

            int k = 0;

            while(i < n && j < n) {
                grid[i][j] = temp[k];

                i++;
                j++;
                k++;
            }
        }

        return grid;
    }
};