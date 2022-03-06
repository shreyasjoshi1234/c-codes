/*
Lab Assignment-2 (OOP using C++)
3.Write the definition for a class called stack, with private members: (item[],
size, top) and
public members: push(),pop(), show()
(i) Write the definitions for each of the above member functions.
(ii) invoke all functions with a switch case.
*/

#include<iostream>
using namespace std;

class stack
{
    int item[10];
    int size=0;
    int top;
    public:
    stack()
    {
        cout<<"Top is -1"<<endl;
        top=-1;
    }
    void push(int x)
    {
        if(top==9)
        cout<<"Stack full"<<endl;
        else{
            top=top+1;
            size=size+1;
            item[top]=x;
        
        }
    }

    int pop()
    {
        int temp;
        if(top==-1){
        cout<<"Stack empty"<<endl;
        return -1;
        }
        else
        temp=item[top];
        top=top-1;
        size=size-1;
        return temp;
    }

    void show1()
    {
        if(top==-1)
        cout<<"Stack empty"<<endl;
        else
        cout<<endl<<"Top : "<<item[top]<<endl;
    }
};

int main()
{
    stack ob;
    int ch,temp;
    do{
        cout<<"1->Push 2->Pop 3->Stacktop"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1: cout<<"Enter element to push"<<endl;
            cin>>temp;
            ob.push(temp);
            break;
            case 2: cout<<endl<<"Popped : "<<ob.pop()<<endl;
            break;
            case 3: ob.show1();
            break;
        }
    }while(ch!=4);
}