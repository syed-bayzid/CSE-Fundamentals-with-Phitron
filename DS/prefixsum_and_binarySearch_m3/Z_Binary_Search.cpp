#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int N, Q;
    cin >> N >> Q;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    while (Q--)
    {
        int X;
        cin >> X;
        int left = 0, right = N - 1;
        int flag = 0;
        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (A[mid] == X)
            {
                flag = 1;
                break;
            }
            else if (A[mid] < X)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        if (flag == 1)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }
}

int main()
{

    solve();
}