#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for (int j = 1; j <= n; j++) {
        for (int i = 1; i <= j; i++) {
            if (i % 2 == 0) {
                cout << "0";
            }
            else{
                cout << "1";
            }
        }
        cout << endl;
    }
}