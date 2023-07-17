//dereferecing operators.
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class M
{
    int x;
    int y;
public:
    void set_xy(int a,int b);
    friend int Sum(M m);  //m just a argument

};
void M::set_xy(int a,int b)
{
    x = a;
    y = b;
}
int Sum(M m)
{
    int M::* px = &M :: x;  // M::* means "pointer to member of class M"
    int M::* py = &M :: y;  // &M::m means "address of the m member of M class"
    M *pm = &m;
    int s = m.*px + m.*py;
    return s;

}
int main()
{
    M n;
    void(M::*pf)(int,int) = &M ::set_xy;
    (n.*pf)(10,20);
    cout<<"Sum : "<<Sum(n)<<endl;

    M *op = &n;
    (op->*pf)(30,40);
    cout<<"Sum = "<<Sum(n)<<endl;

    return 0;
}
