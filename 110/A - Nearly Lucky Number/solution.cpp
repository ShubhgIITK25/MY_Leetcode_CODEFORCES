#include <iostream>
using namespace std;
 
#define int long long
 
int32_t main() {
    int n;
    cin >> n;
 
    int count = 0;
 
    while (n > 0) {
        int digit = n % 10;
 
        if (digit == 4 || digit == 7) {
            count++;
        }
 
        n /= 10;
    }
 
    if (count == 0) {
        cout << "NO";
        return 0;
    }
 
    while (count > 0) {
        if (count % 10 != 4 && count % 10 != 7) {
            cout << "NO";
            return 0;
        }
 
        count /= 10;
    }
 
    cout << "YES";
}