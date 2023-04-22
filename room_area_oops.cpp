#include <iostream>
using namespace std;

class room_area
{

public:
    int l, b, h;

    int area()
    {
        return l * b;
    }
    int vol()
    {
        return l * b * h;
    }
};
room_area r;
room_area r1;

int main()
{
    
    cout << "enter the l b h : ";
    cin >> r.l>> r.b >> r.h;

    cout << "For room 1" << endl;

    cout << "area ";
    cout << r.area() << endl;
    cout << "vol ";
    cout << r.vol() << endl;

    cout << "for room 2" << endl;

    cout << "enter the l b h : ";
    cin >> r1.l >> r1.b >> r1.h;

    cout << "area ";
    cout << r1.area() << endl;
    cout << "vol ";
    cout << r1.vol();
}