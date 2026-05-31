#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    string name;
    char section;
    int marks;
};

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        Student *x = new Student();
        Student *y = new Student();
        Student *z = new Student();

        cin >> x->id >> x->name >> x->section >> x->marks;
        cin >> y->id >> y->name >> y->section >> y->marks;
        cin >> z->id >> z->name >> z->section >> z->marks;

        Student *ans = x;

        if (y->marks > ans->marks)
        {
            ans = y;
        }
        else if (y->marks == ans->marks && y->id < ans->id)
        {
            ans = y;
        }

        if (z->marks > ans->marks)
        {
            ans = z;
        }
        else if (z->marks == ans->marks && z->id < ans->id)
        {
            ans = z;
        }

        cout << ans->id << " " << ans->name << " " << ans->section << " " << ans->marks << endl;
    }

    return 0;
}