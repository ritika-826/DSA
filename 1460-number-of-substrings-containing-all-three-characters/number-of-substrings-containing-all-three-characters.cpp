class Solution {
public:
    int numberOfSubstrings(string s) {
      int n=s.size();
      int ans=0;
      int lastseen[3]={-1,-1,-1};
        for(int j=0;j<n;j++){
            lastseen[s[j]-'a']=j;
            if(lastseen[0]!=-1 && lastseen[1]!=-1 && lastseen[2]!=-1){
                ans+=min({lastseen[0],lastseen[1],lastseen[2]})+1;
            }
        }
       
      return ans;
    }
};