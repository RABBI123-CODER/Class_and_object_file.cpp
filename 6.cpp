//Objects as Arguments and also using object as array
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Time
{
    int hours;
    int minutes;
public:
    void get_time(int h,int m);
    void put_time(void);
    void sum(Time,Time); //declaration with objects as arguments
};

void Time::get_time(int h,int m)//h=0,m=0 mean h and i gets new input.
{
    cout<<"Input Hour : ";
    cin>>h;
    cout<<endl;
    cout<<"Input Minutes : ";
    cin>>m;
    cout<<endl;
    hours = h;
    minutes = m;
}
void Time::put_time(void)
{
    cout<<hours<<" Hours and minutes "<<minutes<<" minutes."<<endl;
}
void Time::sum(Time t1,Time t2)   //t1,t2 are objects.t1==tm[0],t2==tm[1]
{
    minutes = t1.minutes + t2.minutes;
    hours = minutes/60;
    minutes =int(minutes%60);
    hours = hours+t1.hours+t2.hours;
}
int main()
{
    //Time T1,T2,T3;
    int size = 2;
    int count = 0;
    Time T3,tm[size];
    //Time T3;
    for(int i=0;i<size;i++)
    {
        tm[i].get_time(count,count);
    }
  //  T1.get_time(2,45);
    //T2.get_time(3,30);
   // T3.sum(T1,T2);
    for(int i=0;i<size;i++)
    {
        tm[i].put_time();
        cout<<endl;
    }
  /*  cout<<"\n\tT1 = ";
    T1.put_time();
    cout<<"\tT2 = ";
    T2.put_time();
    cout<<"\tT3 = ";

   */
    T3.sum(tm[0],tm[1]);
    T3.put_time();


    return 0;
}



















