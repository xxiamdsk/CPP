#include <iostream>
using namespace std;
class constructor_overloading
{
    int a, b;

public:
    constructor_overloading()
    {
        cout << "Default Constructor: " << endl;
        a = 5;
        b = 10;
    }
    constructor_overloading(int x, int y)
    {
        cout << "Parameterised connstructor: " << endl;
        a = x;
        b = y;
    }
    constructor_overloading(constructor_overloading &c)
    {
        cout << "Copy Constructor: " << endl;
        a = c.a;
        b = c.b;
    }
    void display()
    {
        cout << "a=" << a << endl;
        cout << "b=" << b << endl;
    }
};
int main()
{
    constructor_overloading c1;
    c1.display();
    constructor_overloading c2(10, 20);
    c2.display();
    constructor_overloading c3(c2);
    c3.display();
}