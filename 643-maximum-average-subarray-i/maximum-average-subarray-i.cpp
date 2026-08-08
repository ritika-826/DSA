class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       int win=0;
        for(int i=0;i<k;i++){
             win+=nums[i];
        }
        int maxwin=win;
        for(int i=k;i<nums.size();i++){
            win+=nums[i];
            win-=nums[i-k];
            maxwin=max(maxwin,win);

        }
        return double(maxwin)/k;

        
    }
};