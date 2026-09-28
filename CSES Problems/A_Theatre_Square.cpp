#include <iostream>

using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;

    long long count = 0;

    count += (n + a - 1) / a;
    count *= (m + a - 1) / a;

    cout << count;

    return 0;
}