#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int x,y;
    // vector<vector<int>> a;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            int n;
            cin >> n;
            if(n==1){
                x = i;
                y = j;
                break;
            }
        }
    }
    cout << abs(2-x)+abs(2-y) << endl;
return 0;
}