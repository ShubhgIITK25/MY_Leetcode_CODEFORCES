#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        int first = 0, last = 0;
        int count = 0;
 
        for (int i = 0; i < n; i++) {
            int m;
            cin >> m;
 
            if (m == 0)
                count++;
 
            if (i == 0 && m == 1)
                first = 1;
 
            if (i == n - 1 && m == 1)
                last = 1;
        }
 
        if (first == 0 && last == 0) {
            cout << 0 << endl;
        }
        else if (first + last == 1 && count >= 2) {
            cout << 1 << endl;
        }
        else if (first == 1 && last == 1 && count >= 2) {
            cout << 2 << endl;
        }
        else {
            cout << -1 << endl;
        }
    }
 
    return 0;
}