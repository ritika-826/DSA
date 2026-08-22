class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
      unordered_map<int,int> mp;
      int prefix=0;
      int ans=0;mp[0]=1;
      for(int x: nums){
        prefix+=x%2;
        int needed=prefix-k;
        if(mp.find(needed)!=mp.end()){
            ans+=mp[needed];
        }
        mp[prefix]++;
        

        
      }  
      return ans;
    }
};