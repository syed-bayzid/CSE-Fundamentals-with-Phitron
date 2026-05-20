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

    // Square matrix check
    int flag = 0;

    if (M == N)
    {
        for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < N; j++)
            {
                // Primary or Secondary diagonal
                if (i == j || i + j == N - 1)
                {
                    if (A[i][j] != 1)
                    {
                        flag = 1;
                    }
                }
                else
                {
                    if (A[i][j] != 0)
                    {
                        flag = 1;
                    }
                }
            }
        }
    }
    else
    {
        printf("NO\n");
        return 0;
    }

    if (flag == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}