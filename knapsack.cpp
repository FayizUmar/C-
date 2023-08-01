#include<bits/stdc++.h>
using namespace std;

int comp(int a,int b)
{
    if(a>b)
        return a;
    else{
        return b;
    }
}
int knap(int W,int wt[],int val[],int n)
{
    if(n==0||W==0)
        return 0;

    else if(wt[n-1]>W)
    {
        return knap(W,wt,val,n-1);
    }
    else
    {
        comp(val[n-1]+knap(W-wt[n-1],wt,val,n-1),knap(W,wt,val,n-1));
    }
}
int main()
{
    int W=80;
    int wt[]={50,80,70,60};
    int val[]={10,20,30,40};
    int n=sizeof(val)/sizeof(val[0]);
    cout<<knap(W,wt,val,n)<<endl;
    return 0;
}