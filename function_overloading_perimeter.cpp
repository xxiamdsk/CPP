#include <iostream>
using namespace std;
class shape
{
public:
    int perimeter(int a)
    {
        return 4 * a;
    }
    int perimeter(int a, int b)
    {
        return 2 * (a + b);
    }
    int perimeter(int a, int b, int c)
    {
        return a + b + c;
    }
    int perimeter(int a, int b, int c, int d, int e)
    {
        return a + b + c + d + e;
    }
};

int main()
{
    shape s;
    int a, b, c, d, e;
    cout << "Enter sides of square is : ";
    cin >> a;

    cout << "Enter sides of rectangle is : ";
    cin >> a >> b;

    cout << "Enter sides of triangle is : ";
    cin >> a >> b >> c;

    cout << "Enter sides of pentagon is : ";
    cin >> a >> b >> c >> d >> e;

    cout << "Perimeter of square is : " << s.perimeter(a) << endl;
    cout << "Perimeter of rectangle is : " << s.perimeter(a,b) << endl;
    cout << "Perimeter of triangle is : " << s.perimeter(a,b,c) << endl;
    cout << "Perimeter of pentagon is : " << s.perimeter(a,b,c,d,e) << endl;
}