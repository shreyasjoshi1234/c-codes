#include<iostream>
using namespace std;

class pro
{
    pro()
    {
        cout<<endl<<"Constructor";
        //It is default/normal constructor without any parameters
    }
    ~pro()
    {
        cout<<endl<<"destructor";
        //This is a destructor  
    }
};

int main()
{
   pro p1;   
}