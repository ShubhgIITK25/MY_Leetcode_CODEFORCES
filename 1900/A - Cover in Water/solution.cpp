#include <bits/stdc++.h>
#define int long long
using namespace std;
 
int32_t main() {
    int t;
    cin >> t;
 
    while(t--) {
        int n;
        cin >> n;
 
        string s;
        cin >> s;
 
        int count = 0;
        int ans = 0;
        bool found = false;
 
        for(int i = 0; i < n; i++) {
 
            if(s[i] == '.') {
                count++;
 
                if(count >= 3) {
                    found = true;
                    break;
                }
            }
            else {
                ans += count;
                count = 0;
            }
        }
 
        if(found) {
            cout << 2 << '
';
        }
        else {
            ans += count;
            cout << ans << '
';
        }
    }
 
    return 0;
}