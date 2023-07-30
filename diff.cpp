#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,a[100],X,diff,i,j,temp;
    cout<<"enter the size of array"<<endl;
    cin>>N;
    cout<<"enter the elements of array"<<endl;
    for(i=0;i<N;i++)
    {
        cin>>a[i];
    }
    cout<<"the diff is "<<endl;
    cin>>diff;
    for(int i=0;i<N;i++)
    {
        for(int j=i+1;j<N;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;

            }

        }
        cout<<"the sorted array is "<<a[i]<<endl;
    }
    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(a[j]-a[i]==diff)
            {
                cout<<a[i]<<" "<<a[j]<<" "<<endl;
            }
        }
    }
}