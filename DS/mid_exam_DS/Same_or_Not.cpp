#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int N;
    cin >> N;
    int M;
    cin >> M;

list<int> stk;
    int s;

    for (int i = 1; i <= N; i++)
    {
        cin >> s;
        stk.push(s);
    }

list<int> que;
    int q;
    for (int i = 1; i <= M; i++)
    {
        cin >> q;
        que.push(q);
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
    if(!stk.empty() || !que.empty()){
                cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
}

int main()
{

    solve();
}