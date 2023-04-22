#include<iostream>
#include<string.h>
using namespace std;
class student
{
    int roll;
    char name[20];
    int rank;
    char add[50];

public:
    student(int r, const char *n, int m,const char*a)
    {
        roll = r;
        strcpy(name, n);
        rank = m;
        strcpy(add,a);
    }
    int display()
    {
        cout << "Roll: " << roll << '\n';
        cout << "Name: " << name << '\n';
        cout << "Rank: " << rank << '\n';
        cout << "Address: " << add << '\n';
        cout << "\n";
    }
};
int main()
{

    student s1(1, "John", 100,"64C-WallStreet");
    s1.display();
    student s2(2, "Mary", 200, "68D-WallStreet");
    s2.display();
    student s3(3, "Kevin", 250, "26B-WallStreet");
    s3.display();
}
