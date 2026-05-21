#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int R = N + 5;

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < R - i - 1; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < (2 * i) + 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < R - (N / 2) - 1; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < N; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}