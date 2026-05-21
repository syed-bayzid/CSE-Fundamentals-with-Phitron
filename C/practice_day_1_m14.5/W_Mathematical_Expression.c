#include <stdio.h>

void res(int A, char S, int B, char Q, int C) {
    if(S=='+'){
        if(A+B==C){
            printf("Yes");
        } else {
            printf("%d", A+B);
        }
    }
    if(S=='-'){
        if(A-B==C){
            printf("Yes");
        } else {
            printf("%d", A-B);
        }
    }
    if(S=='*'){
        if(A*B==C){
            printf("Yes");
        } else {
            printf("%d", A*B);
        }
    }
}

int main() {
    int A, B, C;
    char S, Q;
    scanf("%d %c %d %c %d", &A, &S, &B, &Q, &C);
    res(A, S, B, Q, C);
    return 0;
}
