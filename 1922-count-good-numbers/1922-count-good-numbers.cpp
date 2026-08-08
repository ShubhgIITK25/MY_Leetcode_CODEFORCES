class Solution {
public:

    long long mod = 1000000007;

    long long power(long long m, long long n) {
        if(n == 0) return 1;
        if(n == 1) return m;

        if(n % 2 == 0)
            return power((m * m) % mod, n / 2);
        else
            return (m * power(m, n - 1)) % mod;
    }

    int countGoodNumbers(long long n) {
        long long even = (n + 1) / 2;
        long long odd = n / 2;

        return (power(5, even) * power(4, odd)) % mod;
    }
};