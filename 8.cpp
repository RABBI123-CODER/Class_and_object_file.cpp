//swapping private data of classes
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class B;
class A
{
    int value;
public:
    void indata(int a);
    void display(void);
    friend void exchange(A &,B &);

};
class B
{
    int value;
public:
    void indata(int b);
    void display(void);
    friend void exchange(A&,B&);
};
void A :: indata(int a)
{
    value = a;
}
void B :: indata(int b)
{
    value = b;
}
void A :: display()
{
    cout<<"First value of class A  : "<<value<<endl<<endl;
}
void B :: display()
{
     cout<<"Second value of class B : "<<value<<endl<<endl;
}
void exchange(A& x,B& y)
{
    int temp = x.value;
    x.value = y.value;
    y.value = temp;
}
int main()
{
    A s;
    B v;
    s.indata(500);
    v.indata(1000);
    cout<<"Before swapping : "<<endl<<endl;
    s.display();
    v.display();
    cout<<"After swapping : "<<endl<<endl;
    exchange(s,v);
    s.display();
    v.display();
}




































