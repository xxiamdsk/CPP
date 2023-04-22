#include <iostream>
using namespace std;

inline int greatest(int num1, int num2, int num3)
{
    if (num1 > num2 && num1 > num3)
    {
        cout << "The Largest Among Three Numbers is : " << num1 << endl;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        cout << "The Largest Among Three Numbers is : " << num2 << endl;
    }
    else
    {
        cout << "The Largest Among Three Numbers is : " << num3 << endl;
    }
}
int main()
{
    int num1, num2, num3;
    cout << "enter three numbers";
    cin >> num1 >> num2 >> num3;

    greatest(num1, num2, num3);
}