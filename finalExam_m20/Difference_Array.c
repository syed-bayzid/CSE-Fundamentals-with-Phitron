#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; t++)
    {
        int N;
        scanf("%d", &N);

        int A[N];

        // Input array A
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &A[i]);
        }

        int B[N];

        // Copy A to B
        for (int i = 0; i < N; i++)
        {
            B[i] = A[i];
        }

        // Sort B in ascending order
        for (int i = 0; i < N - 1; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                if (B[i] > B[j])
                {
                    int temp = B[i];
                    B[i] = B[j];
                    B[j] = temp;
                }
            }
        }

        // Print absolute differences
        for (int i = 0; i < N; i++)
        {
            printf("%d ", abs(A[i] - B[i]));
        }

        printf("\n");
    }

    return 0;
}