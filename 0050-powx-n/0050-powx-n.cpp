class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;
        
        if(N < 0) N = -N;

        double t;

        if(N == 0) return 1;

        if(N == 1) return n < 0 ? 1 / x : x;

        if(N % 2 == 0) {
            t = myPow(x * x, N / 2);
        } else {
            t = x * myPow(x, N - 1);
        }

        return n < 0 ? 1 / t : t;
    }
};