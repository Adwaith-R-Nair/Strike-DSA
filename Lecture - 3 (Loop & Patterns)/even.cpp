#include <iostream>
using namespace std;

int main()
{
    // Even Number

    for (int i = 2; i <= 20; i = i + 2)
    {
        cout << i << endl;
    };

    for (int i = 1; i <= 20; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
    }
}