#include <iostream>
using namespace std;

void PassByReference(int &x, int &y);

void PassByValue(int x, int y);
void PassByPointer(int *x, int *y);

int main()
{
    int a =10;
    int b=956;
    cout<<"before swapping "<<"a:"<<a<<" b: "<<b<<endl;

   PassByPointer(&a,&b);
    cout<<"after swapping "<<"a:"<<a<<" b: "<<b<<endl;
    
    return 0;
}

void PassByReference(int &x ,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;

     
}
void PassByValue(int x ,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;

     
}
void PassByPointer(int *x ,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

     
}
