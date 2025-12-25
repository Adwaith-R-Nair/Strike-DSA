#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for (int j = 0; j < n; j++) {
        for (int i = n-1; i > j; i--) {
            cout << " ";
        }
        for (int i = 1; i <= 2 * j + 1; i++) {
            cout << "*";
        }
        cout << endl;
    }
}