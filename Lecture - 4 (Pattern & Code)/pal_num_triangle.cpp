#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int j = 1; j <=n; j++){
        for(int i = 1; i <= n-j; i++){
            cout << " ";
        }
        for (int i = 1; i <= j; i++){
            cout << i;
        }
        for (int i = j - 1; i >= 1; i--){
            cout << i;
        }
        cout << endl;
    }
}