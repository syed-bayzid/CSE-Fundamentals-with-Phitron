#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sumPositive = 0;
    int sumNegative = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] >= 0)
        {
            sumPositive += arr[i];
        }
        else if (arr[i] < 0)
        {
            {
                sumNegative += arr[i];
            }
        }
    }
    printf("%d %d", sumPositive, sumNegative);

    return 0;
}