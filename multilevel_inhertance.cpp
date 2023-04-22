#include <iostream>
using namespace std;
class A
{
public:
    int a;
    int get_A_data()
    {
        cout << "Enter the value of a : ";
        cin >> a;
    }
};
class B : public A
{

public:
    int b;
    int get_B_data()
    {
        cout << "Enter the value of b : ";
        cin >> b;
    };
};
class C : public B
{

public:
    int c;
    int get_C_data()
    {
        cout << "Enter the value of c : ";
        cin >> c;
    };
};

class Sum : public C
{

    int sum;

public:
    int get_data()
    {
        sum = a + b + c;
        cout << "Sum of a, b and c is : " << sum << endl;
    };
};

int main()
{
    Sum s;
    s.get_A_data();
    s.get_B_data();
    s.get_C_data();
    s.get_data();
}