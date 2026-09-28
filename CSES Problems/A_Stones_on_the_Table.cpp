#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    char a;
    cin >> a;
    char prev;
    int count = 0;
    for(int i = 1; i<n; i++){
        prev = a;
        cin >> a;
        if(prev == a) count++;
    }
    cout << count;
    return 0;
}