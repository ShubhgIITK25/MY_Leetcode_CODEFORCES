#include <iostream>
#include <vector>
#include <string>
using namespace std;

void VectorSort(vector<int>& a) {
    int n = a.size();

    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        if (a[mid] == 1) {
            swap(a[low], a[mid]);
            low++;
            mid++;
        }
        else if (a[mid] == 2) {
            mid++;
        }
        else {
            swap(a[mid], a[high]);
            high--;
        }
    }
    cout << a[0];
    for (int i = 1; i < n; i++) {
        cout << '+' << a[i];
    }
}

int main() {
    string s;
    cin >> s;

    vector<int> a;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '+') {
            a.push_back(s[i] - '0');
        }
    }

    VectorSort(a);

    return 0;
}