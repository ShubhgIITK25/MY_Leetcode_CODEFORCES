#include <iostream>
#include <vector>
#include <string>
#define int long long
using namespace std;


int32_t main() {
    int n;
    cin >> n;
    while( n != 1){
        cout << n << " ";
        if(n %2){
            n *= 3;
            n += 1;
        }else n /= 2;
    }
    cout << n << endl;
}