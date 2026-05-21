#include <stdio.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);

    int freq[M + 1];

    // initialize frequency array
    for (int i = 0; i <= M; i++)
    {
        freq[i] = 0;
    }

    // read input and count directly
    for (int i = 0; i < N; i++)
    {
        int x;
        scanf("%d", &x);
        freq[x]++;
    }

    // print frequency from 1 to M
    for (int i = 1; i <= M; i++)
    {
        printf("%d - %d\n", i, freq[i]);
    }

    return 0;
}