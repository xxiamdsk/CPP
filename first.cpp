#include <iostream>
using namespace std;

int area(int s)
{
    cout << s * s;
}
int area(int l, int b)
{
    cout << l * b;
}

// int area(int r)
// {
//     cout << 3.14 * r * r;
// }
int main()
{
    int s, l, b, r;
    cout << "side";
    cin >> s;

    cout << "length";
    cin >> l >> b;

    cout << "radius";
    cin >> r;

    area(s);
    area(l, b);
    // area(r);
}

