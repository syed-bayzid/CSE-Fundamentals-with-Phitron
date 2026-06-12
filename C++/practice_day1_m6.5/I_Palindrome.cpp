#include <bits/stdc++.h>
using namespace std;

void solve(string S)
{
    string ans = S;
    reverse(ans.begin(), ans.end());
    if(S == ans) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main()
{
    string S;
    cin >> S;
    solve(S);
}