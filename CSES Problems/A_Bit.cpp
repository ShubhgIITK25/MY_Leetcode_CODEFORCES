#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    int count = 0;
    while(t--){
        string a;
        cin >> a;
        if(a[0]=='X'){
            if(a[1] == '+') count++;
            else count--;
        }else{
            if(a[0] == '+') count++;
            else count--;
        }
    }
    cout << count;
}