#include <stdio.h>
int main() {
    int N, star=1;

    scanf("%d", &N);
    
    int space=N-1;

    for(int i=0; i<N; i++){
        for(int k=1; k<=space; k++){
            printf(" ");
        }
        for(int j=1; j<=star; j++){
            printf("*");
        }
        printf("\n");
        star+=2;
        space--;
    }
    return 0;
}