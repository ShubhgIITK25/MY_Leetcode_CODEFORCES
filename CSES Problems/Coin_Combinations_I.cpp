#include <iostream>
#include <vector>
#include <climits>

using namespace std;
#define int long long

int mod = 1e9 +  7;

vector<int> dp(1e6 + 1, -1);

int rec(vector<int>& a, int x){
    if(x == 0) return 1;
    if(x < 0) return 0;
    if(dp[x] != -1) return dp[x];
    int ans = 0;
    for(int i : a){
        ans += rec(a,x - i);
    } 
    ans = ans%mod;
    return dp[x] = ans;
}

int32_t main() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int answer = rec(a, x);
    answer = answer%(mod);
    
    cout << answer;

}