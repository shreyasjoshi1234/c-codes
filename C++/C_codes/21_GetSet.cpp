#include<iostream>
using namespace std;

class KLE
{
    private:
    int x;
    public:
    //Here x is a private member of class KLE which cannot be accessed outside the class 
    //Hence we make use of something called getter and setter 
    //Getter:Function which returns the value of the private member
    int  getx()
    {
        return x;
    }
    //Setter:Function which sets the value of the private member
    void setx(int setvalue)
    {
        x=setvalue;
    }
};
int main()
{
    int x;
    KLE ob;
    //ob.x=100; --> x is PRIVATE
    //To get value of x here we make use of getter(getx function)
    cout<<endl<<"Value of x : "<<ob.getx()<<endl;//since we have not set any value will get garbage value
    //To set the value of x we make use of setter(setx function)    
    cout<<"Enter the value of x to set : "<<endl;
    cin>>x;
    ob.setx(x);
        cout<<endl<<"Value of x : "<<ob.getx()<<endl;
}