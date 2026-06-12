#include <bits/stdc++.h>
using namespace std;

void sovle(string S)
{
    int N = S.size();

    int e = 0;
    int g = 0;
    int y = 0;
    int p = 0;
    int t = 0;

    for (int i = 0; i < N; i++)
    {
        if (S[i] == 'e' || S[i] == 'E')
            e++;
        else if (S[i] == 'g' || S[i] == 'G')
            g++;
        else if (S[i] == 'y' || S[i] == 'Y')
            y++;
        else if (S[i] == 'p' || S[i] == 'P')
            p++;
        else if (S[i] == 't' || S[i] == 'T')
            t++;
    }
    int ans = min({e, g, y, p, t});
    cout << ans << endl;
}

int main()
{
    string S;
    cin >> S;
    sovle(S);
}