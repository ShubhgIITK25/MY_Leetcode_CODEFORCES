#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int wl, wb;
    cin >> wl >> wb;
    int years = 0;
    while(wl <= wb){
        years++;
        wl *= 3;
        wb *= 2;
    }
    cout << years;
    return 0;
}