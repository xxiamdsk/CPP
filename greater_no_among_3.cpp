#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter first number";
    cin >> a;
    cout<<"enter second number";
    cin >> b;
    cout << "enter third number";
    cin >> c;

    if(a>b && a>c){
        cout << "The Largest Among Three Numbers is : " << a << endl;

    }
    else if (b >= a && b >= c)
    {
        cout << "The Largest Among Three Numbers is : " << b << endl;
    }
    else
    {
        cout << "The Largest Among Three Numbers is : " << c << endl;
    }
}