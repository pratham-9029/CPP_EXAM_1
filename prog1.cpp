// Create a class student to store 5 student names using an array .create a derived class Display that will show all student names using single inheritance.

#include <iostream>
using namespace std;

class School
{
public:
    string std_name[5];

public:
    void setName()
    {
        for (int i = 1; i <= 5; i++)
        {
            cout << "Name ["<<i<<"] : ";
            cin >> std_name[i];
        }
    }
};

class Student : public School
{
public:
    void getName()
    {
        cout<<" ALL 5 STUDENT NAMES";
        for (int i = 0; i < 5; i++)
        {
            cout << "Name : "<<std_name[i];
        }
    }
};

int main()
{
    Student obj;

    obj.setName();
    obj.getName();

    return 0;
}