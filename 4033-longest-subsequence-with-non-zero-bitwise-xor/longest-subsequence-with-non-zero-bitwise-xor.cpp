class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
      int n=nums.size();
      int x=0;
      bool nonzero=false;
      for(int num:nums){
        x^=num;
        if(num!=0){
            nonzero=true;
        }
      }
      if(x!=0)return n;
      if(nonzero)return n-1;
      return 0;  
    }
};