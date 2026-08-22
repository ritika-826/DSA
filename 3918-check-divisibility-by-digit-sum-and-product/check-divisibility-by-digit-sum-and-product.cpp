class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;int digit=0;int product=1;
        int org=n;
       while(n>0){
         digit=n%10;
         sum+=digit;
         product*=digit;
        n=n/10;
        
       } 
       
        if(org%(sum+product)==0)return true;
        return false;
       
       
    }
};