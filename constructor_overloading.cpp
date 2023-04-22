#include <iostream>
using namespace std;
class Room
{
    int length;
    int breadth;
    int height;

public:
    Room()
    {
        length = 48;
        breadth = 59;
        height = 15;
    }
    Room(int l, int b)
    {
        length = l;
        breadth = b;
        height = 26;
    }
    Room(int l, int b, int h)
    {
        length = l;
        breadth = b;
        height = h;
    }

    int volume()
    {
        return length * breadth * height;
    }
};
int main()
{

    Room r1, r2(15, 75), r3(48, 59, 15);

    cout << "\nWhen no arguments are passsed" << endl;
    cout << "Volume of Room 1 is " << r1.volume() << endl;
    cout << "\nWhen two arguments are passsed" << endl;
    cout << "Volume of Room 2 is " << r2.volume() << endl;
    cout << "\nWhen three arguments are passsed" << endl;
    cout << "Volume of Room 3 is " << r3.volume() << endl;
}
