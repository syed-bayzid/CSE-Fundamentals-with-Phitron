#include <stdio.h>
void printFrom1ToN(int N, int indx)
{
    if (N < indx)
        return;
    if (indx != N)
        printf("%d ", N);
    else
        printf("%d", N);
    N--;
    printFrom1ToN(N, indx);
}
int main()
{
    int N;
    scanf("%d", &N);
    int indx = 1;
    printFrom1ToN(N, indx);
    return 0;
}
