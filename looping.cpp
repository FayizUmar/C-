#include <iostream>
using namespace std;

int main()
{
    int i;
    int n;
    int arr[20];
    cout<<"enter the number of elements :"<<endl;
    cin>>n;
    cout<<"the cournt is"<<n<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        
    }
      for(i=0;i<n;i++)
    {
  
        cout<<arr[i]<<endl;
    }
    return 0;
}