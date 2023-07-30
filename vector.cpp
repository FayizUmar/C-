#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    for(int i=0;i<10;i++)
    {
        v.push_back(i);
    }
    cout<<"printing"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<"capacity of vector is "<< v.capacity()<<endl;
    cout<<"size of vector is "<< v.size()<<endl;

   v.pop_back();
   cout<<"after popping"<<endl;
   for(int num:v)
   {
    cout<<v[num]<<endl;
   }


}