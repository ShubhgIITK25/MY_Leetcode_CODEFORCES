#include <iostream>
#include <vector>
#include <string>
#define int long long
 
using namespace std;
 
int32_t main() {
    string s;
    cin >> s;
    int cl = 0, cu = 0;
    string l = s ,u = s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            cl++;
            l[i] = s[i];
            u[i] = s[i] - 'a' + 'A';
        }
        if(s[i] >= 'A' && s[i] <= 'Z'){
            cu++;
            u[i] = s[i];
            l[i] = s[i] - 'A' + 'a';
        }
 
    }
    if(cl < cu){
        cout << u;
    }else{
        cout << l;
    }
}