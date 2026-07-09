#include <bits/stdc++.h>
using namespace std;



void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> A(n+1);

    for(int i=1; i<=n; i++)
    {
        cin >> A[i];
    }

    vector<long long> preSum(n+1);
    preSum[1] = A[1];
    for(int i=2; i<=n; i++)
    {
        preSum[i] = preSum[i-1] + A[i];
    }
    while(q--)
    {
        int l, r;
        cin >> l >> r;
        cout << preSum[r] - preSum[l-1] << endl;
    }
}

int main()
{

    solve();

}