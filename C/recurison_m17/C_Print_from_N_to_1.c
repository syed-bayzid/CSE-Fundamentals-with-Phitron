#include <stdio.h>

void recursivePrint(int i)
{
    if (i < 1)
    {
        return; // Base case: stop recursion when i goes below 1
    }
    printf("%d ", i);      // Print the current value of i
    recursivePrint(i - 1); // Recursive call with the next value
}

int main()
{
    int N;
    scanf("%d", &N);
    recursivePrint(N);
    return 0;
}