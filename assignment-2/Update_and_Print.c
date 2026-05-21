#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    int array[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &array[i]);
    }

    int X, V;
    scanf("%d %d", &X, &V);

    for (int i = 0; i < N; i++)
    {
        if (array[i] == array[X])
        {
            array[X] = V;
        }
    }
    for (int i = N - 1; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }

    return 0;
}