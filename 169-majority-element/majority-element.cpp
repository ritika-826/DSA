class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int candi=0;
       int count=0;
       for(int i=0;i<nums.size();i++){
        if(count==0){
            candi=nums[i];
        }
        if(candi==nums[i]){
            count++;
        }
        else{
            count--;
        }
       } 
       return candi;
    }
};