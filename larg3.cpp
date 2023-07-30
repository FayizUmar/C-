#include<bits/stdc++.h>
using namespace std;

int large(int a[],int N)
{
    int f,s,t;
    f=s=t=INT_MIN;
    while(N<3)
    {
        cout<<"insuffieceint"<<endl;
    }

    for(int i=0;i<N;i++)
    {
        if(a[i]>f)
        {
            t=s;
            s=f;
           
            f=a[i];
            
        }
        else if(a[i]>s && a[i]!=f)
        {
            t=s;
            s=a[i];
           
        }
        else if(a[i]>t && a[i]!=t && a[i]!=s)
        {
            t=a[i];

        }
    }
    cout<< "ans is "<<f<<s<<t<<endl;

}
int main()
{
    int N,a[100];
    cout<<"enter the size of array"<<endl;
    cin>>N;
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<N;i++)
    {
        cin>>a[i];
    }
    int result=large(a,N);
    
    return 0;

}