#include <iostream>

using namespace std;
int getSum(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    cout<<"sum is: "<<sum;
}

int main()
{
    int n = 687;

    getSum(n);
}
