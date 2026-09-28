#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> dp(1e6+1, -1);

#define int long long 

int mod = 1e9 + 7;

int solver(int n){
    if(n == 0) return 1;
    if(n < 0) return 0;
    if(dp[n] != -1) return dp[n];
    int tone = solver(n-1);
    int ttwo = solver(n-2);
    int tthree = solver(n-3);
    int tfour = solver(n-4);
    int tfive = solver(n-5);
    int tsix = solver(n-6);
    return dp[n] = (tone+ttwo+tthree+tfour+tfive+tsix)%mod;
}

int32_t main() {
    int a;
    cin >> a;
    cout << solver(a);
}