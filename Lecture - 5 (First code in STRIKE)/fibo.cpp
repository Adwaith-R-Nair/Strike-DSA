#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number : ";
    cin >> num;

    int a = 0;
    int b = 1;

    for (int i = 1; i <= num; i++){
        cout << a << " ";
        int c = a + b;
        a = b;
        b = c;
    }
}
