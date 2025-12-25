#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    char ch = 'A';
    for (int j = 1; j <= n; j++) {
        for(int i = 1; i <= j; i++) {
            cout << ch;
        }
        ch++;
        cout << endl;
    }
}