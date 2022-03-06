#include<iostream>
using namespace std;

namespace intd
{
    int x;
}

namespace doubled
{
    int x;
}

int main()
{
    intd::x=100;
    cout<<"Int x="<<intd::x<<endl;
    doubled::x=100.2435;
    cout<<"Double x="<<doubled::x<<endl;
}