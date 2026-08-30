class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int minidx=0;
        int maxidx=0;
        for(int i=0;i<n;i++){
            if(nums[minidx]>nums[i]){
                minidx=i;
            }
            if(nums[maxidx]<nums[i]){
                maxidx=i;
            }

        }
        if(minidx>maxidx){
        swap(minidx,maxidx);}
        int front = maxidx + 1;
        int back = n - minidx;
        int both = (minidx + 1) + (n - maxidx);

        return min({front, back, both});

    }
};