#include <iostream>
using namespace std;

int main(){
    int n = 100000000;
    int ans = 0;
    int mul = 1;

    while (n){
        int rem = n % 2;
        ans += rem * mul;
        mul *= 2;
        n /= 10;
    }
    cout << ans;
}