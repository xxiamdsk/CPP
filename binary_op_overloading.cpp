#include <iostream>
using namespace std;

class Binary_op
{

    int real, imag;

public:
    Binary_op(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    Binary_op operator+(Binary_op obj)
    {
        Binary_op res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    void print()
    {
        cout << real << " + i" << imag << '\n';
    }
};

int main()
{

    int a, b, c, d;
    cout << "Enter real and imagenary number : ";
    cin >> a >> b;
    cout << "Enter real and imagenary number : ";
    cin >> c >> d;

    Binary_op c1(a, b), c2(c, d);
    Binary_op c3 = c1 + c2;
    c3.print();
}
