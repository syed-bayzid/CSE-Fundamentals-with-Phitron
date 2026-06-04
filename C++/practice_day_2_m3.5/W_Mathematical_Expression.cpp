#include <bits/stdc++.h>
using namespace std;


// Input
// ↓
// Calculate
// ↓
// Compare
// ↓
// Print

int main()
{
    int A;
    cin >> A;
    char S;
    cin >> S;
    int B;
    cin >> B;
    char Q;
    cin >> Q;
    int C;
    cin >> C;

    if (S == '+')
    {
        if (A + B == C)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << A + B << endl;
        }
    }

    if (S == '-')
    {
        if (A - B == C )
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << A - B << endl;
        }
    }

    if (S == '*')
    {
        if (A * B == C)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << A * B << endl;
        }
    }
}