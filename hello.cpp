#include <iostream>
using namespace std;

namespace new_1
{
    void func1()
    {
        cout << "inside 1" << endl;
    }
}

namespace new_2
{
    void func1()
    {
        cout<<"inside 2"<<endl;
    }
}
namespace func_add
{
    void func1()
    {
        int a=9;
        int b=10;
        int sum;
        sum=a+b;
        cout << "the sum is "<< sum <<endl;
    }
}

using namespace func_add;
int main()
{

    func1();
    return 0;
}

