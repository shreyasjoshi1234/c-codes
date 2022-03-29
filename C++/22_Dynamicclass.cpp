#include<iostream>
using namespace std;

class dclass
{
    public:
    int x;
    void print()
    {
        cout<<endl<<"Hello from dynamic class "<<endl;
    }
} ;

//Here the class is created dynamically by using new <Classname>
//Members of the class can be accsessed using -> operator

int main()
{
    dclass *ob=NULL;
    ob=new dclass;
    ob->x=100;
   // (*ob).x=100; //Alternative to accsess ie using derefrencing
    cout<<"Value of x is : "<<ob->x<<endl;
    ob->print();
}