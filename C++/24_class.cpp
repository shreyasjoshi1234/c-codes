/*
Assignment 1
3.Write the definition for a class called point, with private members: float x,y and public members :
setPoint()
show()
float distance(point)
(i) Write the definitions for each of the above member functions. 
(ii) create three objects of point class in the main function.
(iii) invoke all functions.
*/
#include<iostream>
#include<cmath>

using namespace std;

class point
{
    float x,y;
    public:

    void setpoint(int a,int b)
    {
        x=a;
        y=b;
    }
    void show()
    {
        cout<<"Value of x : "<<x<<" Value of y : "<<y<<endl;
    }
    float distance(float a,float b)
    {
      return(sqrt((((a-x)*(a-x))+((b-y)*(b-y)))));

    }
};

int main()
{
    point ob1,ob2,ob3;
    int a,b;
    cout<<"Enter point 1 : ";
    cin>>a>>b;
    ob1.setpoint(a,b);
    ob1.show();
    cout<<endl<<"Enter point 2: ";
    cin>>a>>b;
    cout<<endl<<"Distance betweeen point one and two is :  "<<ob1.distance(a,b);
}