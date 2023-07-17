//Calculating a factorial number
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

long fact(int n)
{
    if(n==0)
        return 1;
    return (n*fact(n-1));  //Recursive function call
}


int main()
{
    int num;
    cout<<"Enter a positive number : ";
    cin>>num;
    cout<<"Factorial of "<<num<<" is : "<<fact(num);
    return 0;
}
