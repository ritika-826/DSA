class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
         const int MOD = 1e9 + 7;
         long long sum=0;
         long long ans=0;
         vector<int>freq(2,0);
         freq[0]=1;
         for(int x:arr){
            sum+=x;
            int rem=sum%2;
            ans=(ans+freq[1-rem])%MOD;
            freq[rem]++;

         }
         return ans;

    }
};