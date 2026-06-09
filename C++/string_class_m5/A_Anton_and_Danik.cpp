#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int anton = 0, danik = 0;
    for (auto i = s.begin(); i < s.end(); i++)
    {
        if (*i == 'A')
            anton++;
        else
            danik++;
    }
    if (anton > danik)
    {
        cout << "Anton" << endl;
    }
    else if (anton < danik)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }
}

int main()
{

    solve();

    return 0;
}