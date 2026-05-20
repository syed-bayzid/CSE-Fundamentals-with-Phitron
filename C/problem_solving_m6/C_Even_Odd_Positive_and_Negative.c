#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    int even_count = 0;
    int odd_count = 0;
    int positive_count = 0;
    int negative_count = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            even_count++;
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (arr[i] % 2 != 0)
        {
            odd_count++;
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (arr[i] > 0)
        {
            positive_count++;
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (arr[i] < 0)
        {
            negative_count++;
        }
    }

    printf("Even: %d\n", even_count);
    printf("Odd: %d\n", odd_count);
    printf("Positive: %d\n", positive_count);
    printf("Negative: %d\n", negative_count);
    return 0;
}

// else if (arr[i] % 2 != 0)
// {
//     odd_count++;
// }

// else if (arr[i] > 0)
// {
//     positive_count++;
// }
// else if (arr[i] < 0)
// {
//     negative_count++;
// }