#include<iostream>
using namespace std;

class classs1
{
    //Class is empty
};

int main()
{
    classs1 c;
    cout<<endl<<"Size : "<<sizeof(c)<<endl;
}

//An class with no memebers has size of 'one byte' say for identification
//Size of a class can be identified by giving sizeof(Objectname)