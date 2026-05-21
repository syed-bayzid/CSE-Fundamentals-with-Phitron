// #include <stdio.h>
// void recursive_function(int n)
// {
//     printf("%d\n", n);      
//     recursive_function(n);
// }
// int main()
// {
//     recursive_function(5);
//     return 0;
// }

//print 1 to 10 using recursion
#include <stdio.h>

void recursive_print(int n) {
    if (n > 10) {
        return; // Base case: stop recursion when n exceeds 10
    }
    printf("%d\n", n); // Print the current value of n
    recursive_print(n + 1); // Recursive call with the next value
}

int main() {
    int n = 1;
    recursive_print(n);
    return 0;
}