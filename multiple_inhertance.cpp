#include <iostream>
using namespace std;

class add
{
public:
    int sum(int x, int y)
    {
        cout << " The sum of " << x << " and " << y << " is " << x + y << endl<<endl;
    }
};

class Mul
{
public:
    int mul(int x, int y)
    {
        cout << " The Multiplication of " << x << " and " << y << " is " << x * y << endl<<endl;
    }
};

class Sub
{
public:
    int sub(int x, int y)
    {
        cout << " The Subtraction of " << x << " and " << y << " is " << x - y << endl<<endl;
    }
};

class Div
{
public:
    int div(int x, int y)
    {
        cout << " The Division of " << x << " and " << y << " is " << x / y <<endl <<endl;
    }
};


class derived : public add, public Div, public Sub, public Mul
{

public:
    int a, b;

    derived()
    {
        cout << "Enter two numbers for addtion : ";
        cin >> a >> b;
        sum(a, b);

        cout << "Enter two numbers for subtraction : ";
        cin >> a >> b;
        sub(a, b);

        cout << "Enter two numbers for multiplication : ";
        cin >> a >> b;
        mul(a, b);

        cout << "Enter two numbers for division : ";
        cin >> a >> b;
        div(a, b);

        cout << "Enter two numbers for modulus : ";
        cin >> a >> b;
        cout << "The Modulus of " << a << " and " << b << " is " << a % b << endl;
    }
};

int main()
{

    derived dr;
}
