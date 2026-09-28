#include <iostream>
#include <vector>
#include <string>
#define int long long 
using namespace std;

int32_t main() {
    int t;
    cin >> t;
    int mnumber = 0;
    for(int i = 1; i < t; i++){
        int a;
        cin >> a;
        mnumber += (i-a);
    }
    mnumber += t;
    cout << mnumber << endl;
}