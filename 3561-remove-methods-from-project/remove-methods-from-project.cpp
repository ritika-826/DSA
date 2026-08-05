class Solution {
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        vector<vector<int>> graph(n);

        // Build graph
        for (auto &edge : invocations) {
            int a = edge[0];
            int b = edge[1];

            graph[a].push_back(b);
        }

        // Find suspicious methods
        vector<bool> suspicious(n, false);

        queue<int> q;
        q.push(k);
        suspicious[k] = true;

        while (!q.empty()) {

            int node = q.front();
            q.pop();

            for (int next : graph[node]) {

                if (!suspicious[next]) {
                    suspicious[next] = true;
                    q.push(next);
                }
            }
        }

        // Check if suspicious methods can be removed
        for (auto &edge : invocations) {

            int a = edge[0];
            int b = edge[1];

            // Outside method calls suspicious method
            if (!suspicious[a] && suspicious[b]) {

                // Cannot remove anything
                vector<int> ans;

                for (int i = 0; i < n; i++) {
                    ans.push_back(i);
                }

                return ans;
            }
        }

        // Safe to remove suspicious methods
        vector<int> ans;

        for (int i = 0; i < n; i++) {
            if (!suspicious[i]) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};