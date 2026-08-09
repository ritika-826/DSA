class Solution {
public:
     bool isvowel(char c){
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    }
    int maxVowels(string s, int k) {
       int wincount=0;
       for(int i=0;i<k;i++){
        if(isvowel(s[i]))
        wincount++;
       }
       int maxcount=wincount;
       for(int i=k;i<s.size();i++){
        if(isvowel(s[i]))
        wincount++;
        if(isvowel(s[i-k]))
        wincount--;
        maxcount=max(maxcount,wincount);
       }
       return maxcount;

    }
};