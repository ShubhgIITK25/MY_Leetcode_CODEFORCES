#include <iostream>
#include <vector>
#include <string>
#define int long long
 
using namespace std;
 
int32_t main() {
    int n;
    cin >> n;
    int ca = 0, cd = 0;
    while(n--){
        char s;
        cin >> s;
        if(s == 'A'){
            ca++;
        }else{
            cd++;
        }
    }
    if(ca == cd) {
        cout << "Friendship";
        return 0;
    }
    if(ca > cd){
        cout << "Anton";
    }else cout << "Danik";
}