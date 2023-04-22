#include <iostream>
using namespace std;

class A
{
public:
    int num, fact = 1;
    A() // constructor
    {
        cout << "Inside class A" << endl;
        cout << "Enter number for factorial : ";
        cin >> num;

        for (int i = 1; i <= num; i++)
        {
            fact = fact * i;
        }
        cout << "Factorial of the number is " << fact;
    }
};

class B : public virtual A
{
};

class C : public virtual A
{
};

class D : public B, public C
{
};

int main()
{
    D obj;
    return 0;
}
