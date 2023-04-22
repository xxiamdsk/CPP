#include <iostream>
using namespace std;
class Static
{
    int a;
    static int b;

public:
    void getdata()
    {
        cout << "Enter a and b: ";
        cin >> a >> b;
    }
    void showdata()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int Static ::b;
int main()
{
    Static s1, s2;
    cout << "Enter data for first object:" << endl;
    s1.getdata();
    cout << "Enter data for second object:" << endl;
    s2.getdata();
    cout << "Data for first object:" << endl;
    s1.showdata();
    cout << "Data for second object:" << endl;
    s2.showdata();
}
