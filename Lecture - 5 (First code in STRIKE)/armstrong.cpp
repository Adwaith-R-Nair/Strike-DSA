#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int ans = 0;
    int num = n;

    while (n){
        int digit = n % 10;
        int sq = digit * digit * digit;
        ans += sq;
        n /= 10;
    }
    if (ans == num){
        cout << "The number " << num << " is an armstrong number";
    }
    else{
        cout << "Not Armstrong";
    }
}