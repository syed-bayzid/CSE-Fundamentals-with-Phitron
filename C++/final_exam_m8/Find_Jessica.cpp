#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string S;
    getline(cin, S);

    stringstream ss(S);
    string word;

    bool found = false;

    while (ss >> word)
    {
        if (word == "Jessica")
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{

    solve();
}