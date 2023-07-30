#include<bits/stdc++.h>
using namespace std;

int linear(int a[],int N,int X)
{
    for(int i=0;i<N;i++)
    {
        if(a[i]==X)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int N,a[100],X;
    cout<<"enter the size of array"<<endl;
    cin>>N;
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<N;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the element to search"<<endl;
    cin>>X;
    int ans=linear(a,N,X);
    if(ans==-1)
    {
        cout<<"element not found  "<<endl;
        
    }
    else
    {
        cout<<"element found at  "<<ans<<endl;
    }

    return 0;



}