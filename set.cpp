//each element is stored only once , repeted elements are not stored... if 5 is entered 10 times.. only one 5 is stored 
// uses BST - hence no modification , either insert or delete 
// all elements are unique 
#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int>s;
    s.insert(9);
    s.insert(9);
    s.insert(9);
    s.insert(9);
    s.insert(8);
    s.insert(11);

    for(int i : s)
    {
        cout<<i<<endl;
    }

    set<int>::iterator it=s.begin();
    s.erase(it);
    for(int i : s)
    {
        cout<<i<<endl;
    }
}