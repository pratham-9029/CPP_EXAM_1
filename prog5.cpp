#include<iostream>
#include<vector>
using namespace std;


void addName(vector<string> &student){
    string name;
    cout<<"Enter Student Name : ";
    cin>>name;

    student.push_back(name);
}

void showStdName(vector<string> &student){
    cout<<"Students Name : ";
    for (int i = 0; i < student.size(); i++)
    {
        cout<<i<<" : "<<student[i]<<" "<<endl;
    }
}

void deleteStd(vector<string> &student){
    int index;

    cout<<"Enter student index no. to remove : ";
    cin>>index;

    if(index < 0 || index > student.size()){
        cout<<"Wrong Input";
    }
    else
    {
        student.erase(student.begin()+ index);
        cout<<"Student Deleted !"<<endl;
    }
}

int main()
{
    vector<string> student;
    int choice;


    do
    {

        cout<<"1. Add students"<<endl;
        cout<<"2. View all students names"<<endl;
        cout<<"3. Delelte student name by index"<<endl;
        cout<<"4. EXIT"<<endl;

        cout<<endl;
        cout<<"Enter Your Choice : ";
        cin>>choice;

        switch (choice){
            case 1:
            addName(student);
            break;

            case 2:
            showStdName(student);
            break;

            case 3:
            deleteStd(student);
            break;

            case 4:
            cout<<"Code Exited !";
            break;

            default:
            cout<<"Wrong input";
            break;
        }

    } while(choice != 4);
    
    return 0;
}