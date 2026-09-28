#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        int zeroes = 0;
        int ones = 0;
        cin >> n;
        for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            if(a == 0) zeroes++;
            if(a == 1) ones++;
        }
        if(zeroes > ones){
            cout << "Elsie" << endl;
        }else{
            cout << "Bessie" << endl;
            
        }
    }
}