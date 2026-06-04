#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    // reverse
    int B[N];
    for (int i = N - 1; i >= 0; i--)
    {
        B[i] = A[N - 1 - i];
    }

    for (int i = 0; i < N; i++)
    {
        if (A[i] == B[i])
        {
            cout << "YES" << endl;
            return 0;
        }
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    // int L = 0;
    // int R = N-1;

    // while(L=R){
    //     if(A[L] != A[R]){
    //         cout << "NO" << endl;
    //         return 0;
    //     }
    //     L++;
    //     R--;
    // }
    // cout << "YES" << endl;
}