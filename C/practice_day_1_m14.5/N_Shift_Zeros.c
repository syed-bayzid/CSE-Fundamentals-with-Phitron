#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int A[N];

    int nonZero[1000];
    int zero[1000];

    int zeroCount = 0;
    int nonZeroCount = 0;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < N; i++)
    {
        if (A[i] == 0)
        {
            zero[zeroCount] = A[i];
            zeroCount++;
        }
        else
        {
            nonZero[nonZeroCount] = A[i];
            nonZeroCount++;
        }
    }
    for (int i = 0; i < nonZeroCount; i++)
    {
        printf("%d ", nonZero[i]);
    }
    for (int i = 0; i < zeroCount; i++)
    {
        printf("%d ", zero[i]);
    }
    return 0;
}