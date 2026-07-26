#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int N;
    cin >> N;
    int M;
    cin >> M;

    stack<int> stk;
    int s;

    for (int i = 1; i <= N; i++)
    {
        cin >> s;
        stk.push(s);
    }

    queue<int> que;
    int q;
    for (int i = 1; i <= M; i++)
    {
        cin >> q;
        que.push(q);
    }

    if (N != M)
    {
        cout << "NO" << endl;
        return;
    }

    while (!que.empty())
    {
        if (stk.top() != que.front())
        {
            cout << "NO" << endl;
            return;
        }
        stk.pop();
        que.pop();
    }
    cout << "YES" << endl;
}

int main()
{

    solve();
}