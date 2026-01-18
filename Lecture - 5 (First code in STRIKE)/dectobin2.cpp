#include <iostream>
using namespace std;

int main(){
    int n = 65;
    int ans = 0;
    int mul = 1;

    while (n){
        int rem = n % 2;
        ans += rem * mul;
        mul *= 10;
        n /= 2;
    }
    cout << ans;
}