#include <iostream>
using namespace std;

int main(){
    int num = 345128;
    int sum = 0;

    while (num){
        int rem = num % 10;
        sum += rem;
        num /= 10;
    }
    cout << "Sum is : " << sum;
}