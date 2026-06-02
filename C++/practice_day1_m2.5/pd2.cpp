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
int *BNumberArray(int M, int N)
{
    int *B = new int[M];
    for (int i = N; i < M; i++)
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
    int *B = BNumberArray(M, N);

    for (int i = 0; i < N; i++)
    {
        B[i] = A[i];
    }
    delete[] A;
    for (int i = 0; i < M; i++)
    {
        cout << B[i] << " ";
    }
    delete[] B;
}