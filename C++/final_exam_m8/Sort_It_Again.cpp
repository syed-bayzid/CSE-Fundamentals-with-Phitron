#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};


bool studentsCmp(Student l, Student r)
{
    if (l.eng_marks != r.eng_marks)
        return l.eng_marks > r.eng_marks; 

    if (l.math_marks != r.math_marks)
        return l.math_marks > r.math_marks; 

    return l.id < r.id; 
}

int main()
{
    int N;
    cin >> N;

    Student students[N];

    for (int i = 0; i < N; i++)
    {
        cin >> students[i].nm >> students[i].cls >> students[i].s >> students[i].id >> students[i].math_marks >> students[i].eng_marks;
    }

    sort(students, students + N, studentsCmp);

    for (int i = 0; i < N; i++)
    {
        cout << students[i].nm << " "
             << students[i].cls << " "
             << students[i].s << " "
             << students[i].id << " "
             << students[i].math_marks << " "
             << students[i].eng_marks << " " << endl;
    }

    return 0;
}