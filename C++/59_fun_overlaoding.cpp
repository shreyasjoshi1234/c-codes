#include<iostream>
using namespace std;

//Function overloading cannot be done just by changing the return type of function as it will not change the signiture
//to do so we have to change number of parameters or type of parameters
void fun1(int a)
{
    cout<<a<<endl;
}

int fun1(int a)
{
    cout<<a<<endl;
}

int main()
{

}