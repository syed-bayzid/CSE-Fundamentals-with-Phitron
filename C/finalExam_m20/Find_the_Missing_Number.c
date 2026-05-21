#include <stdio.h>

void miss_num_find(long long int M, long long int A, long long int B, long long int C)
{
    long long int MultiplicationOfABC = A * B * C;
    long long int MissingNumber = M / MultiplicationOfABC;
    if(M % MultiplicationOfABC == 0)
    {
        printf("%lld\n", MissingNumber);
    }
    else
    {
        printf("-1\n");
    }
}
int main()
{
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        long long int M, A, B, C;
        scanf("%lld %lld %lld %lld", &M, &A, &B, &C);
        miss_num_find(M, A, B, C);
    }
    return 0;
}