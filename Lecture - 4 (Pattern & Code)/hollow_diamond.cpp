#include <iostream>
using namespace std;

int main() {
    int n = 5;
    // int n;
    // cout << "Enter number of rows: ";
    // cin >> n;
    
    for (int j = 1; j <= n; j++){
        for (int i = n - j; i > 0; i--){
        cout << " ";
        }
        for (int i = 1; i <= 2 * j - 1; i ++){
            if (i == 1 || i == 2 * j - 1){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int j = n - 1; j >= 1; j --){
        for (int i = 1; i <= n - j; i ++){
            cout << " ";
        }
        for (int i = 2 * j - 1; i >= 1; i--){
            if (i == 1 || i == 2 * j - 1){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}