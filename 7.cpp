//Using friend function to add data objects of two different classes
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class A;
class B
{
    int data;
public:
    void set_value(int value)
    {
        cin>>value;
        data = value;
    }
    friend void add(B,A);   //friend data_type function_name(first_working class,second_working class,);
};
class A
{
    int data;
public:
    void set_value(int value)
    {
        cin>>value;
        data = value;

    }
    friend void add(B,A);

};
void add(B obj1,A obj2)   //obj1==b , obj2==a
{
    cout<<"Sum of data values of A and B objects using friend function = "<<obj1.data+obj2.data<<endl;
}
int main()
{
    B b;
    A a;
    int count = 0;
    b.set_value(count);
    a.set_value(count);
    add(b,a);
    return 0;

}
