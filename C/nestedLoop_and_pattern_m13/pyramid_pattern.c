//from ai
#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int star = 2*N - 1;  // প্রথম row তে সর্বোচ্চ star
    int space = 0;

    for(int i=1; i<=N; i++){
        // Space print
        for(int j=1; j<=space; j++){
            printf(" ");
        }
        // Star print — fixed variable ব্যবহার
        for(int j=1; j<=star; j++){
            printf("*");
        }
        printf("\n");
        star -= 2;   // প্রতি row তে star কমছে
        space++;     // প্রতি row তে space বাড়ছে
    }
    return 0;
}


//wrong answer but i will try to fix it later
// #include <stdio.h>
// int main() {
//     int N;
//     scanf("%d", &N);
//     int star = N;
//     int space = 0;
//     for(int i=1; i<=N; i++){
//         for(int j=space; j<=N-1 ; j++){
//             printf(" ");
//         }
//         for(int j=N; j>=0; j--){
//             printf("*");
//         }
//         printf("\n");
//         star-=2;
//         space++;
//     }
//     return 0;
// }