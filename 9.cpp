//Returning objects
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
{
class matrix
    int m[3][3];
public:
    void read();
    void display();
    friend matrix trans(matrix);
};
void matrix :: read()
{
    cout<<"Enter the elements of 3*3 matrix : "<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<" m["<<i<<"]["<<j<<"] = ";
            cin>>m[i][j];
        }
    }
}
void matrix :: display()
{
    cout<<"Show the elements of 3*3 matrix : "<<endl;
    for(int i=0; i<3; i++)
    {
        cout<<endl;
        for(int j=0; j<3; j++)
        {
            cout<<m[i][j]<<"\t";
        }
        cout<<endl;
    }
}
matrix trans(matrix m1)//a==m1
{
   matrix m2;    //creating an object
   for(int i=0;i<3;i++)
   {
       for(int j=0;j<3;j++)
       {
           m2.m[i][j] = m1.m[j][i];
       }
   }
   return(m2);
}
int main()
{
    matrix a,b;
    a.read();
    cout<<endl;
    cout<<"display the matrix : "<<endl<<endl;
    a.display();

    b = trans(a);// because a object is read.
    cout<<endl;
    cout<<"display the  transmetic matrix : "<<endl<<endl;
    b.display();
    return 0;
}

















