#include <iostream>
using namespace std;

int main(){
    int n = 23154;
    int ans = 0;

    while (n != 0){
        ans *= 10;
        int lastdigit = n % 10;
        ans += lastdigit;
        n /= 10;
    }
    cout << "The reversed number is : " << ans;
}