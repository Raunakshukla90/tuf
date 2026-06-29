class Solution {
public:
    bool isPalindrome(int x) {
        bool flag =false;
        long long rev=0;
        int n=x;
        
      while(n>0){
            int lastdigit=n%10;
            rev=rev*10+lastdigit;
            n=n/10;

        }
        if(x==rev) return true;
        return false;
        
    }
};