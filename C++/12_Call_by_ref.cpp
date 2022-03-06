//Call by reference in c++
//While calling we don't give '&' instead we give '&' in accepting parameter in function hence
// no need  use '*' while using 

#include<iostream>
using namespace std;

void swap(int &x,int &y)
{
    int t;
    t=x;
    x=y;
    y=t;
}

int main()
{
    int a,b;
    a=21;
    b=12;
    swap(a,b);//Call
    cout<<a<<" "<<b;
}