#include <stdio.h>

long long int fact(long long int N) {
    if (N == 1)
        return 1;
    long long int mul = fact(N - 1);
    return N * mul;
}

int main() {
    long long int N;
    scanf("%lld", &N);
    long long int ans = fact(N);
    printf("%lld", ans);
    return 0;
}