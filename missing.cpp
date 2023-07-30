#include<bits/stdc++.h>
using namespace std;

int main()
{
    int temp[100],a[100],N,i,j,k;
    cout<<"enter the size of array"<<endl;
    cin>>N;
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<N;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<N;i++);
    {
        temp[i]=0;
    }
    for(j=0;j<N;j++)
    {
        temp[a[j]-1]=1;
    }
    int ans;
    for(k=0;k<N;k++)
    {
        if(temp[k]==0)
        {
            ans = k+1;
        }
    }
   
    cout<<ans;

}