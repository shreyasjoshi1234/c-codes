#include<iostream>
using namespace std;

void fun()
{
    static int x;
    x++;
    cout<<x<<endl;
}

int main()
{
 fun();
 fun();
 fun();
 fun();
 fun();
 fun();
 fun();
 fun();
 fun();   
}