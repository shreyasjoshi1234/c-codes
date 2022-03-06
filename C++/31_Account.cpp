/*
Lab Assignment-2 (OOP using C++)
2. Write the definition for a class called account, with private members: (acctno, name double balance) and
public members: diposit(), withdraw(), checkBalance(), printDetails().
(i) Write the definitions for each of the above member functions.
(ii) invoke all functions with a switch case.
*/

#include<iostream>
using namespace std;

class account
{
    int no;
    string name;
    double balance;
    public:
    account()
    {
        cout<<endl<<"WELCOME TO WORLD BANK"<<endl;
       // cin>>name;
       name="Hello";
        no=177568;

    }
    void deposit(float a)
    {
        balance=balance+a;
    }
    void withdrawal(float b)
    {
        balance=balance-b;
    }
    double checkbal()//Getter
    {
        return balance;
    }
    void printdetails()
    {
        cout<<"Name : "<<name<<endl<<"Acc No : "<<no<<endl<<"Balance : "<<balance<<endl;
    }

};

int main()
{
    account mem1;
    int ch;
    float temp;
        do{
        cout<<endl<<"1->Deposit"<<endl<<"2->Withdrawal"<<endl<<"3->Check Balance"<<endl<<"4->Details"<<endl<<"5->Exit"<<endl;
        cin>>ch;
        switch(ch)
    {
        case 1:cout<<"Enter amount to deposit : ";
                    cin>>temp;
                    mem1.deposit(temp);
                    break;
        case 2:cout<<"Enter amount to withdraw : ";
                    cin>>temp;
                    mem1.withdrawal(temp);
                    break;
        case 3:cout<<"Balance : "<<mem1.checkbal();
                    break;
        case 4:mem1.printdetails();
                    break;
        case 5:break;
    }
        }while(ch!=5);
    

}