#include <iostream>
#include <vector>
#include <climits>
#define int long long
 
using namespace std;
 
int32_t main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int flag = 1;
        vector<int> a(n, INT_MAX);
        for(int i = 0; i < n; i++){
            cin >> a[i];    
            if(a[i] < a[0]){
                    flag = 0;
            }
        }
        if(a[0] < a[1] && flag){
            cout << "YES" << endl;
        }else cout << "NO" << endl;
    }
}