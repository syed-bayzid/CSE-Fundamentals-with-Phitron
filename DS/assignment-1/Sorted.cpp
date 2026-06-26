#include <bits/stdc++.h>
using namespace std;

void solve(int N)
{
    vector<int> A(N);

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    bool sorted = true;

    for (int i = 1; i < N; i++)
    {
        if (A[i] < A[i - 1])
        {
            sorted = false;
            break;
        }
    }

    if (sorted)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        solve(N);
    }

    return 0;
}