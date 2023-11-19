#include<bits/stdc++.h>
using namespace std;
namespace Rakib
{
    int age=24;
    void hello()
    {
        cout<<"Rakib namespaces"<<endl;
    }
}
namespace Sakib
{
    int age=30;
    void hello()
    {
        cout<<"Sakib namespaces"<<endl;
    }
}
using namespace Rakib;
int main()
{
    cout<<age<<endl;
    hello();
    Sakib::hello();
    return 0;
}