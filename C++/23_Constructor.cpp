#include<iostream>
using namespace std;


class zoo
{
    private:
    //All are public
    public:

    zoo() //0
    {
        cout<<endl<<"Hello from unparametarized constructor"<<endl;
    }

    zoo(int x) //1
    {
        cout<<endl<<"Hello from int parametarized constructor"<<endl;
    }
    //Below ones are for experiments 
    //Conclusions
    //So we can have many constructors but each with different numbers of parameters
    //Note
    // we CANNOT have two/three constructors numbered 1 , 2 and 3 all at a time we can have any one  
    // zoo(char y) //2
    // {
    //     cout<<endl<<"Hello from char parametarized constructor"<<endl;
    // }
    
    // zoo(float z) //3
    // {
    //     cout<<endl<<"Hello from float parametarized constructor"<<endl;
    // }

    zoo(int x,int y) //4
    {
         cout<<endl<<"Hello from double parametarized constructor"<<endl;
    }
};

int main()
{
    zoo lion;//This object creation calls the unparametarized constructor 0
    zoo Cheeta(1);//This object creation calls the parametarized constructor 1
    zoo zebra(1,1);//This object creation calls the parametarized constructor 4
   // zoo tiger('1');//This object creation calls the parametarized constructor '1'/'2'/'3' basing on the passing parameter 
   //  zoo Girraffe(21.2);

}