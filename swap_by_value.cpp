// C++ program to swap two numbers without using a third
// variable
#include <iostream>
using namespace std;
int main()
{
     int a, b;
     cout << "Enter the two numbers : \n";
     cin >> a >> b;
     cout << "Before swapping A is : " << a
          << " and B is : " << b << "\n";
     a = a + b;
     b = a - b;
     a = a - b;
     cout << "After swapping A is : " << a
          << " and B is : " << b << "\n";
     return 0;
}
