#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int k,n,w;
    cin >> k >> n >> w;
    int req = k*w*(w+1)/2 - n;
    if(req <= 0) req = 0; 
    cout << req;
    return 0;
}