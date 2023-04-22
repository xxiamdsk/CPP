#include <iostream>
using namespace std;
class A 
{
public:
    int x, y;
    int getdata()
    {
        cout << "Enter value of x and y : ";
        cin >> x >> y;
    }
};
class B : public A
{
public:
    int product()
    {
        cout << "Product= " << x * y << endl; 
    }
};
class C : public A 
{
public:
    int sum()
    {
        cout << "Sum= " << x + y;
    }
};
int main()
{
    B obj1;
    C obj2;

    obj1.getdata();
    obj1.product();

    obj2.getdata();
    obj2.sum();
    
}