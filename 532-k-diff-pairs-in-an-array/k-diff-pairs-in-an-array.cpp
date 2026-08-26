class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(k<0) return 0;
        
        unordered_map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        int ans=0;
        for(auto it:mp){
            int x=it.first;
            if(k==0){
                if(it.second>=2){
                    ans++;
                }
            }
            else{
                if(mp.count(x+k)){
                    ans++;
                }
            }
        }
        return ans;
    }
};