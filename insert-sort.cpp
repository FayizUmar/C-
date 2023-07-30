#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,N,a[100];
    int i,j;
    cout<<"enter the size of array"<<endl;
    cin>>N;
   
    cout<<"enter the element to be inserted"<<endl;
    cin>>k;
    cout<<"enter the elements of array"<<endl;
    for(i=0;i<N;i++)
    {
        cin>>a[i];
    }
    for(i=N-1;(i>=0 && a[i]>k);i--)
    {
        a[i+1]=a[i];
    }
    a[i+1]=k;

        
    
    cout<<"after insertion"<<endl;
    for(j=0;j<N;j++)
    {
        cout<<a[j]<<endl;
    }
    return 0;
}