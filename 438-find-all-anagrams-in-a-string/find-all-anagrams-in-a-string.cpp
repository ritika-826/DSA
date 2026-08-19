class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
       vector<int> ans;
       if(p.size()>s.size())return ans;
        int freqp[26]={0};
        int freqwin[26]={0};
        int l=0;
        int r=0;
        for(char c:p){
            freqp[c-'a']++;

        }
        for(r=0;r<s.size();r++){
            freqwin[s[r]-'a']++;
            if(r-l+1>p.size()){
                freqwin[s[l]-'a']--;
                l++;
            }
            if(r-l+1==p.size()){
               bool same=true;
               for(int i=0;i<26;i++){
                if(freqp[i]!=freqwin[i]){
                    same=false;
                    break;
                }
               }
               if(same){
                ans.push_back(l);
               }

            }

        }
        return ans;
    }
};