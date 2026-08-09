#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    char s;
    set<char> stt;
    while (cin >> s) {
        stt.insert(s);
    }
 
if (stt.size() % 2 == 0)
cout << "CHAT WITH HER!";
else
cout << "IGNORE HIM!";
return 0;
}