#include <iostream>
#include <vector>
#include <string>
#define int long long
using namespace std;

int32_t main() {
    int n;
    cin >> n;
    if(n == 2 || n == 3){
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    if (n == 1) {
        cout << 1;
        return 0;
    }
    if(n == 4){
        cout << "2 4 1 3";
        return 0;
    }
    
    if(n % 2 == 0){
        for(int i = n; i > 0; i = i-2){
            cout << i << " ";
        }
        for(int i = n-1; i > 0; i = i-2){
            cout << i << " ";
        }
    }else{
        for(int i = n-1; i > 0; i = i-2){
            cout << i << " ";
        }
        for(int i = n; i > 0; i = i-2){
            cout << i << " ";
        }
    }


    return 0;
}