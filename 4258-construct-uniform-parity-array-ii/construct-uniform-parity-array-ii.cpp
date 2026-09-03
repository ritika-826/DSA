class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int min_odd=INT_MAX;
        int min_even=INT_MAX;
        for(int x:nums1){
            if(x%2==0){
                min_even=min(x,min_even);
            }
            else{
                min_odd=min(x,min_odd);
            }
        }//saare even ya phir saare odd
        if(min_odd==INT_MAX || min_even==INT_MAX)return true;
        //sabse chota odd toh sb shi
        if(min_odd<min_even)return true;
        else return false;
    }
};