class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int freq[101]={0};
        int ans=0;
        for(int x:nums){
            if(x-k >=0)
             ans+=freq[x-k];
            if(x+k <=100)
              ans+=freq[x+k];
            freq[x]++;
        }
        return ans;
    }
};