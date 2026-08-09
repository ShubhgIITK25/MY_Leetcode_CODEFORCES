#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int flag = 0;
        for(int i = 2; i <= n; i++){
            if((n+1)%i == 0){
                cout << "No" << endl;
                flag = 0;
                break;
            }else{
                flag = 1;
            }
        }
        if(flag) cout << "Yes" << endl;
    }
    return 0;
}