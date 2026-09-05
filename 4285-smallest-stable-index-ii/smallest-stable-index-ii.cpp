class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> ans(nums.size(),0);
        ans[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            ans[i]=max(nums[i],ans[i-1]);
        }
        int mn=INT_MAX;
        for(int i=nums.size()-1;i>=0;i--){
            mn=min(nums[i],mn);
            ans[i]-=mn;

        }
        for(int i=0;i<nums.size();i++){
            if(ans[i]<=k)return i;
        }
        return -1;
    }
};