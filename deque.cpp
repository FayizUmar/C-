#include<iostream>
#include<deque>
#include<vector>
#include <list>
using namespace std;

int main()
{
    deque<int> d;
    d.push_front(5);
    d.push_front(7);
    d.push_front(8);
    for(int i:d)
    {

        cout<<i<<endl;
    }
    cout<<"after"<<endl;
    d.pop_back();
    for(int i:d)
    {

        cout<<i<<endl;
    }
  cout<< d.size()<<endl;
 cout<<d.at(1)<<endl;
 cout<<"--------"<<endl;
 cout<<d.front()<<endl<<d.back()<<endl;


 d.insert(d.end(),{5,6,7});
 cout<<d.size()<<endl;
 cout<<"______"<<endl;
  for(int i:d)
    {

        cout<<i<<endl;
    }

    d.erase(d.begin()+1); 
    cout<<"---"<<endl;
    for(int i:d)
    {

        cout<<i<<endl;
    }

    cout<<"-------LIST-------"<<endl;
    cout<<"no direct element access in a list"<<endl;

    list<int>l;
    l.insert(l.end(),{1,4,5,6,7});
    l.erase(l.begin());
    for(int i:l)
    {
        cout<<i<<endl;
    }
   cout<<"_________"<<endl;
   list<int>l1(10,90);
   for(int j: l1)
   {
    cout<<j<<endl;
   }

    list<int> :: iterator it = l.begin();
    advance(it,0 );
    
    l.erase(it);
    cout<<"----"<<endl;
    for(int i:l)
    {
        cout<<i<<endl;
    }

}