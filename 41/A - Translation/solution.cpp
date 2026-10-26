#include <iostream>
#include <vector>
#include <string>
#define int long long
 
using namespace std;
 
int32_t main() {
    string a;
    string b;
    cin >> a >> b;
    if(a.size() != b.size()) {
        cout << "NO";
        return 0;
    }
    int n = a.size();
    for(int i = 0; i < n; i++){
        if(a[i] == b[n - i - 1]){
            continue;
        }else{
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}