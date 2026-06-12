#include <bits/stdc++.h>
using namespace std;

void solve(string S)
{
    while (true)
    {
        int pos = S.find("EGYPT");

        if (pos == -1)
            break;

        S.replace(pos, 5, " ");
    }

    cout << S << endl;
}

int main()
{
    string S;
    cin >> S;
    solve(S);

    return 0;
}