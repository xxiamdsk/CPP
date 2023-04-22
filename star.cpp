#include <iostream>
using namespace std;
int main()
{
    cout << "\n\n";

    for (int i = 1; i <= 7; i++)
    {

        for (int k = 1; k <= 7 - i; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;

        for (int i = 7; i >= 1; i--)
        {

            for (int k = 1; k <= 7 - i; k++)
            {
                cout << " ";
            }
            for (int j = 1; j <= i; j++)
            {
                cout << "*"
                     << " ";
            }
            cout << endl;
        }
    }

    // for (int i = 7; i >= 1; i--)
    // {

    //     for (int k = 1; k <= 7-i; k++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*"<< " ";
    //     }
    //     cout << endl;
    // }
}