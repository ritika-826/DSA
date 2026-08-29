class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<int,bool>mp;int ans=0;
        for(char i:jewels){
          mp[i]=true;
        }
        for(char s:stones){
            if(mp[s]==true){
                ans++;
            }
        }
        return ans;
    }
};