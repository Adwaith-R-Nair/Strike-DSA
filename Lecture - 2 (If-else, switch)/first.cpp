#include <iostream>
using namespace std;

int main()
{
    // int a, b;
    // cout << "Enter your 1st number : ";
    // cin >> a;
    // cout << "Enter your 2nd number : ";
    // cin >> b;

    // cout << "Your numbers are : " << a << " and " << b;

    char c = 'a' + 2;
    cout << "\nThe character is : " << c << endl;

    int a = 20;
    int b = 10;

    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl;

    // Assignment operator
    a += b;
    //    a = a+b;
    a -= b;
    //    a = a-b;

    a *= b;
    //    a = a*b;

    a %= b;

    cout << a;

    // Comparison operator
    // > , < , >=, <= , !=

    cout << (a != b);

    //  left shift
    a = a << 3;

    // Right shift
    a = a >> 3;
    cout << a;

    // Logical operator
    // && (and) : Both side should be true--> Then only true, else false
    // || (or): If both side is false--> Then only false, else true
    //  ! (Not operator): (Reverse)

    // cout<<(!0);

    //    int a = 10;

    //    pre increment , post incremenet
    //  pre decrement, post decrement

    //    int b = --a;

    //    cout<<b<<endl;
    //     cout<<a;

    // a++
    //    ++a;
}
