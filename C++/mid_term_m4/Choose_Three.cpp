#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, S;
        cin >> N ;
        cin >> S;

        int A[N];

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        sort(A, A + N);

        bool found = false;

        for (int i = 0; i < N; i++)
        {
            int j = i + 1;
            int k = N - 1;

            while (j < k)
            {
                int sum = A[i] + A[j] + A[k];

                if (sum == S)
                {
                    found = true;
                    break;
                }
                else if (sum < S)
                {
                    j++;
                }
                else
                {
                    k--;
                }
            }

            if (found)
                break;
        }

        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}