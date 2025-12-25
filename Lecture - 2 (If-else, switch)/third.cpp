#include <iostream>
using namespace std;

int main() {
    //    even or odd

    int num;
    cout<<"Enter your Number: ";
    cin>>num;

    if(num%2==0){
        cout<<"Even Number\n";
    }
    else{
        cout<<"Odd Number\n";
    }


    int num1 = 10;
    int num2 = 14;

    if(num1>num2){
        cout<<"num1 is greater";
    }
    else if(num2>num1){
        cout<<"num2 is greater";
    }
    else{
        cout<<"both are equal";
    }

 
}