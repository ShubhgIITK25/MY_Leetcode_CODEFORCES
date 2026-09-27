#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
int main() {
int t;
cin >> t;
while(t--){
        int n, k;
    cin >> n >> k;
    long long ans = 1LL << n-k+1;
    ans = ans + 2*(k-1);
    cout << ans << endl;
}
return 0;
}