#include <iostream>
#include <vector>
#include <string>

#define int long long

using namespace std;

int32_t main() {    
    int t;
    cin >> t;
    while(t--){
        int x, y , k;
        cin >> x >> y >> k;
        int monocarp = 0;
        for(int i = 0; i < k; i++){
            monocarp += (y - x) % (x+i);
        }
        cout << monocarp << endl;
    }
}