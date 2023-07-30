#include<bits/stdc++.h>
using namespace std;

int binary(int a[],int l,int r,int N,int X)
{
    int mid = (l+r)/2;
    while(l<=r)
    {
        if(a[mid]==X)
        {
            return mid;
        }
        else if(a[l]>X)
        {
            l=l+mid;

        }
        else
        r=mid-1;

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
    int ans=binary(a,0,N-1,N,X);
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