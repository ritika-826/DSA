class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int> mp;
        mp[0]=1;
        int prefix=0;
        int ans=0;
        for(int x: nums){
            prefix+=x;
            int needed=prefix-goal;
            if(mp.find(needed)!=mp.end()){
                ans+=mp[needed];
            }
            mp[prefix]++;
        }
        return ans;
    }
};