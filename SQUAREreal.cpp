#include <iostream>
using namespace std;
class square
{
public:
    int area(int len)
    {
        cout << "Area of square is " << len * len << endl;
    }
};
int main()
{
    square s;
    int len;
    cout << "Enter the side of the square : ";
    cin >> len;
    s.area(len);
}