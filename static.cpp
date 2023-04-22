#include <iostream>
using namespace std;

class sample
{

    static int num;

public:
    static int deepak()
    {
        cout << num;
    }

    sample()
    {
        num++;
    }
};
int sample::num = 5;
int main()
{
    sample r1;
    r1.deepak();

    sample r2;
    r2.deepak();

    sample r3;
    r3.deepak();
}