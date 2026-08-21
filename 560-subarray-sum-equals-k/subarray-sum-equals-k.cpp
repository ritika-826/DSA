class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0]=1;
        int prefix=0;
        int ans=0;
        for(int x:nums){
            prefix +=x;
            int needed=prefix-k;
            if(mp.find(needed)!=mp.end()){
                ans+=mp[needed];
            }
            mp[prefix]++;
        }
        return ans;
    }
};