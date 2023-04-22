#include <iostream>
using namespace std;
int swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int num1, num2;
    cout << "Enter your first number : ";
    cin >> num1;
    cout << "Enter your second number : ";
    cin >> num2;

    swap(&num1, &num2);

    cout << "value of first number is : " << num1 << endl;
    cout << "value of second number is : " << num2;
}