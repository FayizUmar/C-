#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],temp[100],i,j,k,N;
    cout<<"enter the size of array"<<endl;
    cin>>N;
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<N;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<N;j++)
    {
        temp[j]=0;
    }
     for(int k=0;k<N;k++)
    {
        temp[a[k]-1]=1;
    }
    int ans;
    for(k=0;k<N;k++)
    {
        if(temp[k]==0)
        {
            ans = k+1;
            break;
        }
       
    }
    cout<<"the missing element is "<<ans<<endl;
    for(int j=0;j<N;j++)
    {
        for(int k=j+1;k<N;k++)
        {
            if(a[j]==a[k])
            {
                cout<<"the repeating element is "<<a[j]<<endl;
            }
        }
    }
}