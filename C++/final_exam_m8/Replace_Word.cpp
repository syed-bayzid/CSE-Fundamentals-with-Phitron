#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string S, X;
    cin >> S >> X;

    int lengthOfX = X.size();

    int findX = S.find(X);

    for (int i = 0; i < S.size() ; i++)
    {
        if (S.substr(i, lengthOfX) == X)
        {
            S.replace(i, lengthOfX, "#");
        }
    }

    cout << S    << endl;
}


int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
}