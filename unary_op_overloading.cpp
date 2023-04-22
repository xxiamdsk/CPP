#include <iostream>
using namespace std;
class unary_op_overloading
{
    int a,b;

public:
    unary_op_overloading(int x,int y)
    {
        a = x;
        b = y;
    }
    void operator++()
    {
        a++;
        b++;
    }
    void operator--()
    {
        a--;
        b--;
    }
    void display()
    {
        cout << "Value of a is : " << a << endl;
        cout << "Value of b is : " << b << endl;
    }
};
int main()
{
    int x,y;
    cout<<"Enter value of x and y : ";
    cin>>x>>y;

    unary_op_overloading obj(x,y);
    cout << "Before incrementing" << endl;
    obj.display();
    ++obj;

    cout << "After incrementing" << endl;
    obj.display();

    cout << "Before decrementing" << endl;
    obj.display();
    --obj;

    cout << "After decrementing" << endl;
    obj.display();
    return 0;
}