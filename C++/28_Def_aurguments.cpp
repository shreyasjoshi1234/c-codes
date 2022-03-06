#include<iostream>
using namespace std;

void function(int x,int y,int z=11)
{
    cout<<x+y+z;
}
int main()
{
    function(11,11);
   // function();//This cannot be done wihout assinging default values to function : void function(int x=11,int y=11)
 
}