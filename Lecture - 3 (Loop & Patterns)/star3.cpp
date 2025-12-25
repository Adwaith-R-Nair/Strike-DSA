#include <iostream>
using namespace std;

int main()
{
    // for (int j = 0; j < 5; j++){
    //     for (int i = 5 - j; i > 0; i--){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    for (int j = 5; j > 0; j--){
        for (int i = 0; i < j; i++){
            cout << "*";
        }
        cout << endl;
    }
}