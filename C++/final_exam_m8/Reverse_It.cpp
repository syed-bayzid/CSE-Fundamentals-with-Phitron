#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;

    // Student(string nm, int cls, char s, int id)    {
    //     this->nm = nm;
    //     this->cls = cls;
    //     this->s = s;
    //     this->id = id;
    // }
};

void solve()
{
}

int main()
{
    int N;
    cin >> N;

    Student students[N];
    for (int i = 0; i < N; i++)
    {
        cin >> students[i].nm >> students[i].cls >> students[i].s >> students[i].id;
    }

    int i = 0;
    int j = N - 1;
    while (i < j)
    {
        

            swap(students[i].s, students[j].s);
            j--;
            i++;
    }

    for (int i = 0; i < N; i++)
    {

        cout
            << students[i].nm << " "
            << students[i].cls << " "
            << students[i].s << " "
            << students[i].id << endl;
    }

    solve();
}