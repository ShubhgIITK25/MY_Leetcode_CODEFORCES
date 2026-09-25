#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
int main() {
 int t;
 cin >> t;
 while(t--){
    int n;
    char c;
    cin >> n >> c;
    string s;
    cin >> s;
    int a = s.length();
    int left = 0;
    int right = a - 1;
    int rc = 0;
    while(left<=right){
        if(s[left] == s[right]){
            left++;
            right--;
            continue;
        }else if(s[left] == c || s[right] == c) rc++;
        else{
            rc += 2;
        }
        left++;
        right--;
    }
    cout << rc << endl;
 }
}