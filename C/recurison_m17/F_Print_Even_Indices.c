#include <stdio.h>
void even_indices(int A[], int i)
{
    if (i < 0)
    {
        return; // Base case: stop recursion when N is 0 or negative
    }
    if (i % 2 == 0)
    {
        printf("%d ", A[i]); // Print the current value of N
    }
    even_indices(A, i - 1);
}
int main()
{
    int N;
    scanf("%d", &N);
    int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    even_indices(A, N - 1);

    return 0;
}