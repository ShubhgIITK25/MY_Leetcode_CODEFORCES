#include <iostream>
#include <vector>
#include <string>
#define int long long
 
using namespace std;
 
int32_t main() {
    int n;
    int t;
    cin >> n >> t;
    while(t--){
        if(n%10 == 0){
            n = n/10;
        }else{
            n = n-1;
        }
    }
    cout << n;
}