#include<bits/stdc++.h>
using namespace std;


int check(int a[],int l,int r)
{

    if(l<=r)
    {
        int mid;
        mid = (l+r)/2;
        if((a[mid]==1) && (a[mid+1]==0))
        {
            return mid+1;
        }
        else if(a[mid]==1)
        {
            return check(a,mid+1,r);
        }
        else
        {
            return check(a,l,mid-1);
        }
    }
    return 0;
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
    int ans = check(a,0,N-1);
    cout<<"------"<<endl<<ans<<endl;
    
}