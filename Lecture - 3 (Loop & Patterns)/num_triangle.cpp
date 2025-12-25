#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for (int j = 0; j < n; j++){
        for (int i = 1; i <= j+1; i ++){
            cout << i;
        }
        cout << endl;
    }
}