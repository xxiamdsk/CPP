#include <iostream>
using namespace std;

class Simple
{
    int data1;
    int data2;
    int data3;

public:
    Simple(int a, int b = 9, int c = 8)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }

    int printData();
};

int Simple ::printData()
{
    cout << "The value of data1, data2 and data3 is " << data1 << ", " << data2 << " and " << data3 << endl;
}

int main()
{
    Simple s1(5, 8, 9);
    s1.printData();

    Simple s2(15, 59);
    s2.printData();

    Simple s3(77);
    s3.printData();

    return 0;
}


