#include<bits/stdc++.h>
using namespace std;

int main()
{
    int odd_1;
    int even_1;

    odd_1=0;
    even_1=0;

    for(int i=0;i<binary.length();i++)
    {
        if(binary[i]==1)
        {
            if(i%2==0)
            {
                even_1++;
            }
            else
                odd_1++;
        }
    }
}