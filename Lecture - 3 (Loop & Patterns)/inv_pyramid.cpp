#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for (int j = n; j > 0; j--) {
        for (int i = 0; i < n - j; i++) {
            cout << " ";
        }
        for (int i = 1; i <= 2 * j - 1; i++) {
            cout << "*";
        }
        cout << endl;
    }
}