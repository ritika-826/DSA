class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        sort(nums1.begin(),nums1.end());
        int odd=0,even=0;
        for(int x:nums1){
            if(x%2==0)even++;
            else odd++;
        }
        if(even==0 || odd==0)return true;
        if(nums1[0]%2==0 ){
           return false;}
        return true;
    }
};