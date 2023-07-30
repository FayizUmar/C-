#include<bits/stdc++.h>
using namespace std;

int recur(int a[],int l,int r,int X)
{
    int m=(l+r)/2;
    cout<<"middle element is "<<m<<endl;
    while(l<=r)
    {
        if(a[m]==X)
        {
            return m;
        }
        else if(X>a[m])
        {
            recur(a,m+1,r,X);
        }
        else
        {
            recur(a,l,m-1,X);
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
    int ans=recur(a,0,N-1,X);
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