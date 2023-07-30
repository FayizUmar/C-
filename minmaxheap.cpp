#include<iostream>
#include<queue>
#include<vector>
using namespace std;
//priority queue is implemented using max heap and min heap , default priority queue is max heap 
int main()
{
    priority_queue<int>k; // max heap
    k.push(1);
    k.push(5);
    k.push(16);
    k.push(21);
    int size = k.size();
    for(int i=0;i<size;i++)
    {
        cout<<k.top()<<endl;
        k.pop();
    }
    cout<<"min heap"<<endl;

    priority_queue<int,vector<int>,greater<int> >r; //heap
   r.push(5);
   r.push(100);
   r.push(99);
   r.push(0);
   r.push(5);
    int size1=r.size();
   for(int j=0;j<size1;j++)
   {
    cout<<r.top()<<endl;
    r.pop();
   }



}