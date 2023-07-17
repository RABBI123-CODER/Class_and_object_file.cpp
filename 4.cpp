//static member function
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class test
{
    int code;
    static int count;
public:
    void set_code(void);
    void show_code(void);
    static void show_count(void);
};

void test::set_code()
{
    code = ++count;
}
void test::show_code()
{
    cout<<"Object number : "<<code<<endl;
}
void test::show_count(void)
{
    cout<<"count : "<<count<<endl;
}
int test::count;
int main()
{
    test t1,t2;
    t1.set_code();   //current value of (count)
    t2.set_code();

    test::show_count(); //the value contained in code represents a unique number of its object.
    cout<<"and"<<endl;
    test t3;
    t3.set_code();

    test::show_count();

    t1.show_code();
    t2.show_code();
    t3.show_code();

    return 0;
}
















