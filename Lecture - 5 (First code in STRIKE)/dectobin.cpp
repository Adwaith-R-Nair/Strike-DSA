#include <iostream>
using namespace std;

int main(){
    int n = 13;
    int ans = 0;
    int rev = 0;

    while (n){
        int digit = n % 2;
        ans = ans * 10 + digit;
        n /= 2;
    }
    cout << ans;
    while (ans){
        int lastdigit = ans % 10;
        rev = rev * 10 + lastdigit;
        ans /= 10;
    }
    cout << endl;
    cout << rev;
}