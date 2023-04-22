#include <iostream>
using namespace std;
class base
{
public:
    int a, b;
    class sum
    {
    public:
        sum(int x, int y)
        {
            cout << x + y;
        }
    };
};
int main()
{
    base::sum s(5, 6);
}