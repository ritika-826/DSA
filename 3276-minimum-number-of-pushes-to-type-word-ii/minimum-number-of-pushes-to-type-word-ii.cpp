class Solution {
public:
    int minimumPushes(string word) {
       int n=word.size();
       int ans=0;
       vector<int> freq(26,0);
       for(char ch:word){
        freq[ch-'a']++;
       }
       sort(freq.begin(),freq.end(),greater<int>());
       for(int i=0;i<26;i++){
        ans += freq[i]*((i/8)+1);
       } 
       return ans;
    }
};