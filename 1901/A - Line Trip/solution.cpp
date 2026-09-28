#include <iostream>
#include <vector>
#include <string>
 
#define int long long
 
using namespace std;
 
int32_t main() {
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n>> x;
        int lastdistance = 0;
        int distance = 0;
        int maxd = 0;
        int prev;
        cin >> prev;
        int first = prev;
        int curr;
        if(n == 1){
            cout << max(prev, 2*(x- prev)) << endl;
            continue;
        }
        for(int i = 1; i < n; i++){
            cin >> curr;
            distance = curr - prev;
            maxd = max(maxd, distance);
            prev = curr;
        }
        lastdistance = 2*(x - curr);
        cout << max(lastdistance, max(maxd, first)) << endl;
    }   
}