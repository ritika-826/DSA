class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>> ans;

        int r = rStart;
        int c = cStart;

        // R, D, L, U
        int dr[] = {0, 1, 0, -1};
        int dc[] = {1, 0, -1, 0};

        int dir = 0;
        int steps = 1;

        while(ans.size() < rows * cols) {

            // same step count for 2 directions
            for(int twice = 0; twice < 2; twice++) {

                for(int i = 0; i < steps; i++) {

                    // first check current cell
                    if(r >= 0 && r < rows &&
                       c >= 0 && c < cols) {

                        ans.push_back({r, c});
                    }

                    // move
                    r += dr[dir];
                    c += dc[dir];
                }

                dir = (dir + 1) % 4;
            }

            steps++;
        }

        return ans;
    }
};
