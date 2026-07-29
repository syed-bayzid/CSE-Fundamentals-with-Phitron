#include <bits/stdc++.h>
using namespace std;

void forward_backword(list<int> &lst)
{
    cout << "L -> ";

    for (auto it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    cout << "R -> ";

    for (auto it = lst.rbegin(); it != lst.rend(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void solve(list<int> &lst)
{
    int x, v;
    cin >> x >> v;

    if (x < 0 || x > lst.size())
    {
        cout << "Invalid" << endl;
    }
    else if (x == 0)
    {
        lst.push_front(v);
        forward_backword(lst);
    }
    else if (x == lst.size())
    {
        lst.push_back(v);
        forward_backword(lst);
    }
    else
    {
        auto it = next(lst.begin(), x);
        lst.insert(it, v);
        forward_backword(lst);
    }
}

int main()
{
    list<int> lst;

    int q;
    cin >> q;

    while (q--)
    {
        solve(lst);
    }

    return 0;
}