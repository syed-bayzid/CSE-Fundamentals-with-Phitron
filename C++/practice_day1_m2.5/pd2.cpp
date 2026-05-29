#include <bits/stdc++.h>
using namespace std;

// A Number Array 
int *ANumberArray(int N)
{
    int *A = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    return A;
}

// B Number Array
int *BNumberArray(int M)
{
    int *B = new int[M];
    for (int i = 0; i < M; i++)
    {
        cin >> B[i];
    }

    return B;
}

int main()
{
    int N;
    cin >> N;

    int *A = ANumberArray(N);

    int M;
    cin >> M;
    int *B = BNumberArray(M);

    for (int i = 0; i < N; i++)
    {
        B[i] = A[i];
    }
    for (int i = 0; i < M; i++)
    {
        cout << B[i] << " ";
    }
}