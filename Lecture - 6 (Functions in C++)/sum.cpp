#include <iostream>
using namespace std;

int sum(int n1, int n2){
    int sum = n1 + n2;
    return sum;
}

int main(){
    int num1 = sum(4,5);
    int num2 = sum(10,13);
    int num3 = sum(15,55);
    cout << num1 << endl << num2 << endl << num3;
}