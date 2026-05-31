#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int class;
    double gpa;

    Student(int roll, int class, double gpa)
    {
        this->roll = roll;
        this->class = class;
        this->gpa = gpa;
    }
};

Student *fun()
{

    Student *karim = new Student(1, 10, 4.00);
    return karim; 
}

int main()
{
    Student *p = fun();
    cout << p->roll << " " << p->class << " " << p->gpa << endl;
}