#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter your limit";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    cout << "\n\n";
   
    for (int i = 1; i <= num; i++)
    {

        for (int k = 1; k <= num - i; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";

        }
        cout << endl;
    }
    cout << "\n\n";
    for (int i = num; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    cout << "\n\n";

    for (int i = 1; i <= num; i++)
    {

        for (int k = 1; k <= num - i; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}