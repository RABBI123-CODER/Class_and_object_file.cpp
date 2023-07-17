//processing a shopping list
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
const int m = 50;
class ITEMS
{
    int item_code[m];
    float item_price[m];
    int count;
public:
    void CNT(void){count = 0;}
    void GetItem(void);
    void DisplaySum(void);
    void remove(void);
    void DisplayItem(void);

};

void ITEMS :: GetItem(void)
{
    cout<<"Enter Item Code"<<endl;
    cin>>item_code[count];
    cout<<"Enter Item Price"<<endl;
    cin>>item_price[count];
    count++;
}

void ITEMS :: DisplaySum(void)
{
    float sum = 0;

    for(int i=0;i<=count;i++)
    {
        sum = sum+item_price[i];
        //cout<<endl<<" Total Value : "<<sum<<endl;
    }
    cout<<endl<<" Total Value : "<<sum<<endl;
}

void ITEMS :: remove(void)
{
    int a;
    cout<<"Enter Item Code : "<<endl;
    cin>>a;
    for(int i=0;i<count;i++)
    {
        if(item_code[i]==a)
        {
            item_price[i]=0;
        }
    }

}

void ITEMS :: DisplayItem(void)
{
    cout<<endl<<"Code Price : "<<endl;
    for(int i=0;i<count;i++)
    {
        cout<<endl<<item_code[i];
        cout<<" "<<item_price[i];
    }
}


int main()
{
    ITEMS order;
    order.CNT();
    int x;
    do
    {
        cout<<endl<<"You Can Following Below Choice."<<endl;
        cout<<"Enter Appropriate number : "<<endl;
        cout<<endl<<"Add An Item : "<<endl;
        cout<<endl<<"Display Total Value : "<<endl;
        cout<<endl<<"Delete An Item : "<<endl;
        cout<<endl<<"Display All Item : "<<endl;
        cout<<endl<<"Quit"<<endl;
        cout<<endl<<"What is your option"<<endl;


    cin>>x;
    switch(x)
    {
    case 1:
        order.GetItem();
        break;
    case 2:
        order.DisplaySum();
        break;
    case 3:
        order.remove();
        break;
    case 4:
        order.DisplayItem();
        break;
    case 5:
        break;
    default:
        cout<<"Error in input.Try again"<<endl;
    }
    }
    while(x!=5);
    return 0;
}
