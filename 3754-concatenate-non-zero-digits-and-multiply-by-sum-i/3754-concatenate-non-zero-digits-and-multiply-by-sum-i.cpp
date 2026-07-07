class Solution {
public:
    long long sumAndMultiply(int n) {
          long long s = 0, res = 0, m = 1;
        while(n>0){
            int d=n%10;
             if (d) {
                res = d * m + res;
                m *= 10;
                s += d;
            }

            n/=10;

        }
        return res*s;
    }
};