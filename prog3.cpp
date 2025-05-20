#include<iostream>
#include<vector>
using namespace std;


class Product{
public:
    string name;
    int price;

    Product(string name , int price){
        this->name = name;
        this->price = price;
    }

};

int main()
{
    vector<Product> products;

    int n;

    cout<<"Enter number of product : ";
    cin>>n;

    for (int i = 1; i < n; i++)
    {
        string name;
        int price;

        cout<<"Enter name : ";
        cin>>name;

        cout<<"Enter Price : ";
        cin>>price;

        products.back(name ,price);

    }

    for (int i = 1; i < n; i++)
    {
        string name;
        int price;

        cout<<"Enter name : "<<name;

        cout<<"Enter Price : "<<price;
    }
    
    return 0;
}