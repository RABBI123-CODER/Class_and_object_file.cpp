//arrays of object
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class employee
{
    char name[30];
    float age;
public:
    void get_data(void);
    void put_data(void);

};
void employee::get_data()
{
    cout<<"Enter name : ";
    cin>>name;
    cout<<"Age : ";
    cin>>age;
}
void employee::put_data(void)
{
    cout<<"Name : "<<name<<endl;
    cout<<"Age : "<<age<<endl;
}
//const int size = 3;     //to object count 0,1,2 as array system
int main()
{
    int size = 3;
    employee manager[size];
    for(int i=0;i<size;i++)
    {
        cout<<"Details of manager "<<i+1<<" : "<<endl;
        manager[i].get_data();
    }
    cout<<endl<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<"Show of manager  list "<<i+1<<" : "<<endl;
        manager[i].put_data();
    }
    return 0;
}




















