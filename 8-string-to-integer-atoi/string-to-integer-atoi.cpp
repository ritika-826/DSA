class Solution {
public:
    int myAtoi(string s) {
          int i=0;
          int n =s.size();
          while(i<n && s[i]==' '){
            i++;
          }
          int sign=1;
          if(i<n && (s[i]=='+'||s[i]=='-')){
            if(s[i]=='-'){
                sign=-1;
            }
            i++;
            
          }
          long long ans=0;
          while(i<n && isdigit(s[i])){
            int digit=s[i]-'0';
            ans=ans*10+digit;
            i++;
           
            if(sign == 1 && ans > INT_MAX) {
                return INT_MAX;
            }

            if(sign == -1 && ans > 2147483648LL) {
                return INT_MIN;
            }


          }
          return sign* ans;

    }
};