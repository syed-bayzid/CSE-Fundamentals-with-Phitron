#include <bits/stdc++.h>
using namespace std;

void solve(string num)
{
    int N = num.size();
    int first3Nums = N/2;
    int last3Nums = N - first3Nums;
    
    int first3NumsOfSum = 0;

    for (int i = 0; i < first3Nums; i++)
    {
        first3NumsOfSum += num[i];
    }
    int last3NumsOfSum = 0;
    for (int i = first3Nums; i < N; i++)
    {
        last3NumsOfSum += num[i];
    }

    if (first3NumsOfSum == last3NumsOfSum)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string num;
        cin >> num;
        solve(num);
    }
}