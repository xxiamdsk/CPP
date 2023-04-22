#include<iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}
int add(int a, int b, int c)
{
    return a + b + c;
}
int main()
{
    int a, b, c;    
    cout << "Enter your first number : ";
    cin >> a;
    cout << "Enter your second number : ";
    cin >> b;
    cout << "Enter your third number : ";
    cin >> c;
    cout << "Sum of two numbers is : " << add(a, b) << endl;
    cout << "Sum of three numbers is : " << add(a, b, c);   
}