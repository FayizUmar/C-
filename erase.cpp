#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int>p;
    p.insert(p.end(),{7,8,9,10});
    cout<<"elements are "<<endl;
    for(int i:p)
    {
        cout<<i<<endl;
    }
    list<int>::iterator it = p.begin();
    advance(it,2);
    p.erase(it);
    cout<<"after erasing"<<endl;
    for(int i:p)
    {
        cout<<i<<endl;
    }
    it=p.begin();
    advance(it,1);
    p.erase(it);
    cout<<"after erasing"<<endl;
    for(int i:p)
    {
        cout<<i<<endl;
    }


}

