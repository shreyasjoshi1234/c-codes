/*
Lab Assignment-2 (OOP using C++)
5. Write the definition for a class called myString, with private members (char
s[]) and
public members : setString(), printString(),getLength(),reverse(), isPalindrome().
(i) Write the definitions for each of the above member functions.
(ii) create one object of myString class in the main function.
(iii) invoke all functions.
*/

#include<iostream>
#include<cmath>
#include<cstring>
#include<string>

using namespace std;

class mystring
{
    string s;
    public:
    void setstring(string str)
    {
        // strcpy(s,str);
        s=str;
    }

    void printstring()
    {
        cout<<"String : "<<s<<endl;
    }

    int getlen(string str)
    {
        int i=0;
        for( ;str[i]!='\0';i++);
                cout<<"Length : "<<i<<endl;
        return i;
    }

    void reverse()
    {
        int i=0;
        int j=getlen(s);
        j--;
        char temp;
        while(i<j)
        {
            temp=s[i];
            s[i]=s[j];
            s[j]=temp;
            i++;
            j--;
        }
        cout<<"Reversed string : "<<s<<endl;
    }

    void palindrome()
    {
        int i=0;
        int f=0;
        int j=getlen(s);
        j--;
        char temp;
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                f=1;
                break;
            }
            i++;
            j--;
        }
        if(f==0)
        cout<<"Palindrome"<<endl;
        else
        cout<<"Not a polidrome"<<endl;
    }
};

int main()
{
    char str[10]; 
    int x;
    mystring ob;
    cout<<"Enter string : ";
    cin>>str;
    ob.setstring(str);
    ob.printstring();
    ob.reverse();
    ob.palindrome();
    return 0;
}