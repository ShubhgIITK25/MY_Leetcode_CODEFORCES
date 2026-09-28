#include <iostream>
using namespace std;

#define int long long

int32_t main() {
    int n;
    cin >> n;

    int prev, curr;
    cin >> prev;

    int count = 0;

    for (int i = 1; i < n; i++) {
        cin >> curr;

        if (curr < prev) {
            count += prev - curr;
        } else {
            prev = curr;
        }
    }

    cout << count << endl;
}