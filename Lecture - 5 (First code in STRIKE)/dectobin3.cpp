#include <iostream>
using namespace std;

int main(){
    int n = 256;
    int ans = 0;
    int mul = 1;

    while (n){
        int rem = n&1;
        ans += rem * mul;
        mul *= 10;
        n = n >> 1;
    }
    cout << ans;
}