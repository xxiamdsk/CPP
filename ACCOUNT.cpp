#include <iostream>
#include <string.h>
using namespace std;
class account
{
    int acc_no;
    char name[20];
    float balance;
    int inter = 0;

public:
    account(int a,const char *n, float b)
    {
        acc_no = a;
        strcpy(name, n);
        balance = b;
    }
    int deposit(float amount)
    {
        balance += amount;
    }
    int withdraw(float amount)
    {
        if (balance >= amount)
            balance -= amount;
        else
            cout << "Insufficient balance\n";
    }
    int interest(){
        
        inter += balance * 0.05;

    }
    int display()
    {
        cout << "Account number: " << acc_no << '\n';
        cout << "Name: " << name << '\n';
        cout << "Balance: " << balance << '\n';
        cout << "Interest on available balance: " << inter << '\n';
        cout << "\n";
    }
};
int main()
{
    account a1(1, "John", 1000);
    a1.deposit(1000);
    a1.withdraw(500);
    a1.interest();
    a1.display();

    account a2(2, "Mary", 2000);
    a2.deposit(1000);
    a2.withdraw(500);
    a2.interest();
    a2.display();

    account a3(3, "Kein", 2500);
    a2.deposit(2000);
    a2.withdraw(500);
    a2.interest();
    a2.display();
   
    account a4(4, "Harry", 2000);
    a2.deposit(1000);
    a2.withdraw(100);
    a2.interest();
    a2.display();



}

