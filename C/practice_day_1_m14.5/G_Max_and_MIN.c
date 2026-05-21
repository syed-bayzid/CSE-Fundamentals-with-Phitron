#include <stdio.h>

int checkMinMax(int A[], int N){
    int max = A[0];
    int min = A[0];
    for (int i = 1; i < N; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
        if (A[i] < min)
        {
            min = A[i];
        }
    }
    printf("%d %d", min,  max);
}

    int main()
{
    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    checkMinMax(A, N);
    return 0;
}