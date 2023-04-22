#include <iostream>
using namespace std;

int main()
{

    int n, m, count;

    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Enter a positive integer: ";
    cin >> m;

    for (int i = n; i <= m; i++)
    {
        count = 0;

        for (int j = 2; j <= n ; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }

        if (count == 0)
            cout << i << " is a prime number" << endl;
    }
}
