#include <stdio.h>
int main()
{
    int N, upperStar = 1;

    scanf("%d", &N);

    int upperSpace = N - 1;

    for (int i = 0; i < N; i++)
    {
        for (int k = 1; k <= upperSpace; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= upperStar; j++)
        {
            printf("*");
        }
        printf("\n");
        upperStar += 2;
        upperSpace--;
    }
    for (int i = 0; i < N; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            printf(" ");
        }
        for (int j = upperStar-2; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
        upperStar -= 2;
    }

    return 0;
}