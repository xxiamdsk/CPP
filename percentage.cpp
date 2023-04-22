#include <iostream>
using namespace std;

int main()
{
    int a[10], sum = 0, perc;
    cout << "Enter your numbers" << endl;
    for (int i = 1; i < 6; i++)
    {
        cout << "Enter number of subjeect " << i << " ";
        cin >> a[i];
    }

    for (int i = 1; i < 6; i++)
    {
        sum = sum + a[i];
    }

    cout << "Sum of tolal marks are " << sum << endl;
    perc = sum / 5;
    cout << "percentage of marks is " << perc;
}