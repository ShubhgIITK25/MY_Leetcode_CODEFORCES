
#include <iostream>
#include <vector>
#include <string>
#define int long long 
using namespace std;

int32_t main() {
    string s;
    cin >> s;
    int l = 0;
    int r = 0;
    int count = 0, maximum = 0;
    while(r != s.size()){
        if(s[l] == s[r]){
            count++;
            r++;
            maximum = max(maximum, count);
        }else{
            count = 1;
            l = r;
            r++;
        }
    }   
    cout << maximum << endl;
}