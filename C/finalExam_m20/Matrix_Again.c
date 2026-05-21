#include <stdio.h>
int main()
{
    int M, N;
    scanf("%d %d", &M, &N);
    int A[M][N];
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    for (int i = M-1; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < M; i++)
    {
        printf("%d ", A[i][N - 1]);
    }
    printf("\n");
    return 0;
}