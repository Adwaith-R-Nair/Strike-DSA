#include <iostream>
using namespace std;

int main()
{
    // for (int j = 1; j <= 21; j += 5)
    // {
    //     for (int i = j; i <= j + 4; i++)
    //     {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }

    int num = 1;
    for (int j = 0; j < 5; j++)
    {
        for (int i = 0; i < 5; i++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}