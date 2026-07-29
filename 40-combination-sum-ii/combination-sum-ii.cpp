class Solution {
public:
    vector<int> curr;
    vector<vector<int>> ans;

    void solve(int idx,vector<int>& candidates,int target){
     if(target==0){
        ans.push_back(curr);
        return;
     }
     if(target<0)return;
     if(idx>=candidates.size())return;
      for (int i = idx; i < candidates.size(); i++) {

            // Skip duplicates at the same recursion level
            if (i > idx && candidates[i] == candidates[i - 1])
                continue;

            // Since the array is sorted, no need to continue
            if (candidates[i] > target)
                break;

            // Choose the current element
            curr.push_back(candidates[i]);

            // Move to the next index because each element
            // can be used only once
            solve(i + 1, candidates, target - candidates[i]);

            // Backtrack
            curr.pop_back();
    }
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        solve(0,candidates,target);
        return ans;
    }
};