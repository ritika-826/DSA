class Solution {
public:
    vector<int> curr;
    vector<vector<int>> ans;
    
    void solve(int idx,vector<int>& candidates, int target){
     if(target==0){
        ans.push_back(curr);
        return;
    }
    if(target<0 || idx >=candidates.size())return;
    for(int i=idx;i<candidates.size();i++){
        if(i>idx && candidates[i]==candidates[i-1])continue;
        curr.push_back(candidates[i]);
        solve(i+1,candidates,target-candidates[i]);
        curr.pop_back();
    }
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        solve(0,candidates,target);
        return ans;
    }
    
};