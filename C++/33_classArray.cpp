/*
Lab Assignment-2 (OOP using C++)
4. Write the definition for a class called student, with private members : name[],
roll, score[], subjectCount and
public members: setScore(), calculateGrade(), printGrade().
(i) Write the definitions for each of the above member functions.
(ii) create an array of five objects of student class.
(iii) invoke all above functions for all objects.
*/

#include<iostream>
using namespace std;

class student
{
    string name;
    int roll;
    int score;
    int count;
    float grade;
    public:
    void setscore(int a)
    {
        score=a;
    }
    void calculategrade()
    {
        grade=score;
    }
    void printgrade()
    {
        cout<<"Grade : "<<grade;
    }
};

int main()
{
    student ob[11];
    ob[0].setscore(100);
    ob[0].calculategrade();
    ob[0].printgrade();
    return 0;
}