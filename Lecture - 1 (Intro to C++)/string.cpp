#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "Adwaith";

    // Length of string
    cout << name.length() << endl;  // 7

    // Combine strings
    string firstName = "Adwaith";
    string lastName = "R Nair";
    string fullName = firstName + " " + lastName;
    cout << fullName << endl;  // Adwaith R Nair

    // Access characters (starts from 0)
    cout << name[0] << endl;  // A
    cout << name[1] << endl;  // d

    return 0;
}
