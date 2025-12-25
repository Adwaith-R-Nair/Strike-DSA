#include <iostream>
using namespace std;

int main()
{
    for (int j = 0; j < 5; j++) {
        for (int i = 0; i < 5 - (j + 1); i++) {
            cout << " ";
        }
        for (int i = 0; i < j + 1; i++) {
            cout << "*";
        }
        cout << endl;
    }
}