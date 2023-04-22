#include <iostream>
using namespace std;
int count = 0;
class Test
{
public:
    Test()
    {
            count++;
            cout << "\n No. of Object created: " << count;
    }

    ~Test()
    {
            cout << "\n No. of Object destroyed: " << count;
            --count;
    }
};

main()
{
    Test t, t1, t2, t3;
    return 0;
}
