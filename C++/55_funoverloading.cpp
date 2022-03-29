/*
1. Write the definition for the following functions:
int findMin(int[]), float FindMin(float[]), int findMax(int[]), floatFindMax(float[]),
int findSum(int []), float findSum(float []), void sort(int[]), void sort([]).
(i) Write the definitions for each of the above member functions.
(ii) invoke above functions from your main function.
*/

#include<iostream>
using namespace std;

int add(int a,int b)
{
    return(a+b);
}

float add(float a,float b)
{
    return(a+b);
}

int main()
{
    int x=1,y=2;
    cout<<add(x,y)<<endl;
    float a=1.2,b=2.3;
    cout<<add(a,b)<<endl;
}