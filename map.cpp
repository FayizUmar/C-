//same value cannot map into different values 
#include<iostream>
#include<map>
#include<map>

using namespace std;

int main()
{
    map<int,string>m;
    m.insert({7,"nissan"});
    m.insert({9,"toyota"});
    m.insert({11,"cadillac"});
    m.insert({12,"LC"});

    for(int i : m)
    {
        cout<<m.first<<endl;
    }


}