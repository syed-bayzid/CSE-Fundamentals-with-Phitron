#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int N, M;
    cin >> N >> M;

    list<int> st;
    list<int> q;

    int x;

    for (int i = 0; i < N; i++)
    {
        cin >> x;
        st.push_front(x);
    }
    for (int i = 0; i < M; i++)
    {
        cin >> x;
        q.push_back(x);
    }

    if (N != M)
    {
        cout << "NO" << endl;
        return;
    }

    while (!st.empty())
    {
        if (st.front() != q.front())
        {
            cout << "NO" << endl;
            return;
        }

        st.pop_front();
        q.pop_front();
    }

    cout << "YES" << endl;
}

int main()
{

    solve();
}