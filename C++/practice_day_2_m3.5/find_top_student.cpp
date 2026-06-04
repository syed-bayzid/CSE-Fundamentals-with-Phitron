#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    string section;
    int math_marks;
    int cls;

    Student(string n, int r, string s, int m, int c)
    {
        name = n;
        roll = r;
        section = s;
        math_marks = m;
        cls = c;
    }
};

int main()
{
    Student s1("Ali", 1, "A", 95, 10);
    Student s2("Karim", 2, "A", 90, 10);
    Student s3("Jabbar", 3, "A", 80, 10);

    Student top_student = s1;

    if(s2.math_marks > top_student.math_marks){
        top_student = s2;
    }

    if(s3.math_marks > top_student.math_marks){
        top_student = s3;
    }

    cout << top_student.name << endl;
}

