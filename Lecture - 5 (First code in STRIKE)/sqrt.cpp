#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number : ";
    cin >> num;
    int ans = 1;

    for (int i = 1; i <= num/2; i++){
        if (i * i <= num){
            ans = i;
        }
    }
    cout << ans;
    
}