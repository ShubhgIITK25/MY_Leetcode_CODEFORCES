#include <iostream>
#include <vector>
#include <climits>

using namespace std;
#define int long long

vector<int> dp(1e6 + 1, -1);

int rec(vector<int>& a, int x){
    int ans = INT_MAX;
    if(x == 0) return 0;
    if(x < 0) return INT_MAX;
    if(dp[x] != -1) return dp[x];
    for(int i : a){
        ans = min(ans, 1 + rec(a, x-i));
    }
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
    if(answer>INT_MAX-1) cout << -1;
    else cout << answer;

}