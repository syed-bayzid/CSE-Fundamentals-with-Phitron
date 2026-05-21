#include <stdio.h>

void recursivePrint(int N, int i) {
    if (i > N) {
        return; // Base case: stop recursion when i exceeds N
    }
    printf("I love Recursion\n"); // Print the current value of n
    recursivePrint( N, i + 1); // Recursive call with the next value
}

int main() {
    int N;
    scanf("%d", &N);
    recursivePrint(N, 1);
    return 0;
}