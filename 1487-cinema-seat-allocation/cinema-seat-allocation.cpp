class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int,vector<int>>mp;
        // store reserved seats row wise
        for(auto s:reservedSeats){
            mp[s[0]].push_back(s[1]);
        }
        // if rows are empty
        int ans=(n-mp.size())*2;
        //if seats are reserved
        for(auto it:mp){
            bool left=true;
            bool right=true;
            bool middle=true;
            for(int seat:it.second){
                if(seat>=2 && seat<=5){
                    left=false;
                }
                if(seat>=4 && seat<=7){
                    middle=false;
                }
                if(seat>=6 && seat<=9){
                    right=false;
                }
            }
                
                if(left && right){
                    ans+=2;
                }
                else if(left||right||middle)ans+=1;
            
        }
        return ans;
    }
};