#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for (int j = 1; j <=n; j++){
        bool num = j % 2;
        for (int i  = 0; i < j; i++){
            cout << num;
            num = !num;
        }
        cout << endl;
    }
}