#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int a,b,c;
        cin >> a >> b >> c;
        int *maxi = &a;
        int *mini = &a;
        if(b > *maxi) maxi = &b;
        if(c > *maxi) maxi = &c;
 
        if(b < *mini) mini = &b;
        if(c < *mini) mini = &c;
 
        int rounds = 0;
        if(a == b || a == c || b == c) {
            cout << rounds << endl;
            continue;
        }
        while(!(a == b || a == c || b == c)){
            (*mini)++;
            (*maxi)--;
            rounds++;
        }
        cout << rounds << endl;
    }
    return 0;
}
 
 
 
 
 