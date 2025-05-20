#include<iostream>
using namespace std;

class Student{
public:
    string student;
public:
    void setName(){
        cout<<"Enter Student Name : ";
        cin>>student;
    }
};

class Marks{
public:
    double sub1,sub2,sub3;
public:
    void setMarks(){
        cout<<"Enter Physics Marks: ";
        cin>>sub1;

        cout<<"Enter Chemistry Marks: ";
        cin>>sub2;

        cout<<"Enter Maths Marks: ";
        cin>>sub3;
    }
};

class Result : public Student ,public Marks{
public:
    double total,percentage;

    void getDetail(){
        cout<<"Name : "<<student<<endl;

        total = sub1 + sub2 + sub3;

        cout<<"Total : "<<total<<"/300"<<endl;

        percentage = (total/300)*100;

        cout<<"Your Percentage is : "<<percentage;

    }
};

int main()
{
    Result obj;

    obj.setName();
    obj.setMarks();
    obj.getDetail();
    return 0;
}