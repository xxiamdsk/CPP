#include <iostream>
using namespace std;
class unversity
{
    char uname[20];

public:
    void getdata()
    {
        cout << "Enter unversity name: ";
        cin >> uname;
    }
    void putdata()
    {
        // cout << "Unversity name: " << uname << endl;
        cout << uname << "\t\t    ";
    }
};
class college : public unversity
{
    char college_name[20];

public:
    void getdata()
    {
        unversity::getdata();
        cout << "Enter college name: ";
        cin >> college_name;
    }
    void putdata()
    {
        unversity::putdata();
        // cout<<"College name: "<<college_name<<endl;
        cout << college_name << "\t\t";
    }
};
class student : public college
{
    int marks;
    char name[20];
    int roll;

public:
    void getdata()
    {
        college::getdata();
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll: ";
        cin >> roll;
        cout << "Enter marks: ";
        cin >> marks;
    }
    void putdata()
    {
        college::putdata();
        cout << name << "\t   " << roll << "\t\t   " << marks << "\t";
        // cout << "Name: " << name << endl;
        // cout << "Roll: " << roll << endl;
        // cout<<"Marks: "<<marks<<endl;
    }
};
class teacher : public college
{
    int salary;
    char name[20];
    char subject[20];

public:
    void getdata()
    {
        college::getdata();
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter teaching subect: ";
        cin >> subject;
        cout << "Enter salary: ";
        cin >> salary;
    }
    void putdata()
    {
        college::putdata();
        cout << name << "\t   " << subject << "\t\t   " << salary << "\t";
        // cout<<"Name: "<<name<<endl;
        // cout<<"Subject: "<<subject<<endl;
        // cout<<"Salary: "<<salary<<endl;
    }
};
class manager : public student, public teacher
{
public:
    void getdata()
    {
        cout << "Enter Student details:" << endl;
        student::getdata();

        cout << "\n"
             << "Enter Teacher details:" << endl;
        teacher::getdata();
    }
    void putdata()
    {
        cout << "Student details:" << endl;
        cout << "Unversity\t College\t Name\t Roll No.\t Marks" << endl;
        cout << "````````````````````````````````````````````````````````````````" << endl;

        student::putdata();

        cout <<"\n\nTeacher details:" << endl;
        cout << "Unversity\t College\t Name\t Subject\t Salary" << endl;
        cout << "````````````````````````````````````````````````````````````````" << endl;
        teacher::putdata();
    }
};
int main()
{
    manager m;
    m.getdata();
    m.putdata();
}
