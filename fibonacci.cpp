// Fibonacci Series using Space Optimized Method
#include <iostream>
using namespace std;

int fib(int n)
{
    int a = 0, b = 1, c, i;
    if (n == 0)
        return a;

    cout << "0" << endl;
    cout << "1" << endl;
    for (i = 2; i <= n-1; i++)
    {
        c = a + b;
        a = b;
        b = c;
        cout << c << endl;
    }
}

int main()
{
    int n = 10;

    fib(n);
}
