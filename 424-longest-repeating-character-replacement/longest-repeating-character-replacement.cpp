class Solution {
public:
    int characterReplacement(string s, int k) {
         int l=0;
         int r=0;
         int maxfreq=0;
         int freq[26]={0};
         int ans=0;
         for(r=0;r<s.size();r++){
            freq[s[r]-'A']++;
            maxfreq=max(maxfreq,freq[s[r]-'A']);
            while((r-l+1)-maxfreq>k){
                freq[s[l]-'A']--;
                l++;
            }
            ans=max(r-l+1,ans);
         }
            return ans;
         
    }
};