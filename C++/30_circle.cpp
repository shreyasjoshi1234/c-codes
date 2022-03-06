/*
Lab Assignment-2 (OOP using C++)
1. Write the definition for a class called circle, with
private member: radius and
public members :circle(),circle(double), setRadius(), printArea(),PrintCircumference().
(i) Write the definitions for each of the above member functions.
(ii) invoke above functions
*/
#include<iostream>
#include<cmath>
using namespace std;


class circle
{
    int radius;
    public:
    circle()//Default constructor
    {
        radius=1;
    }
    circle(double a)//Parametarized constructor
    {
        radius=a;
    }
    void setradius(int r)
    {
        radius=r;
    }
    void printarea()
    {
        float a;
        a=3.142*pow(radius,2);
        cout<<endl<<"Area : "<<a<<endl;
    }
    void printcir()
    {
        float c;
        c=2*3.142*radius;
        cout<<endl<<"Circumference : "<<c<<endl;
    }
};

int main()
{
    circle ob1,ob2,ob3(2);
    int r;
    cout<<"Enter radius of circe : ";
    cin>>r;
    ob1.setradius(r);
    ob1.printarea();//Ob1 calls default constructor while decleration and radius is set one and is overwritten by user's value
    ob1.printcir();
    ob2.printarea();//ob2 calls the default constructor while decleration, as it is created without passing anything and hence radius is set to one(1)
    ob2.printcir();
    ob3.printarea();//ob3 calls the parametarized constructor while decleration, as it is created by passing parameter
    ob3.printcir();
    // ob3.setradius(11);
    // ob3.printarea();
    // ob3.printcir();

    
}