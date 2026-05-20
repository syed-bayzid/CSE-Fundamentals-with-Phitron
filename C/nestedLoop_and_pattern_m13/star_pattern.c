// The following code prints a right-angled triangle star pattern based on the input number of rows (N). Each row contains an increasing number of stars, starting from 1 star in the first row up to N stars in the Nth row.

#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int star = 1;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=star; j++){
            printf("* ");
        }
        printf("\n");
        star++;
    }
    return 0;
}

// The above code prints a right-angled triangle star pattern. To print an inverted right-angled triangle star pattern, you can modify the code as follows:
// #include <stdio.h>
// int main() {
//     int N;
//     scanf("%d", &N);
//     int num = N;
//     for(int i=1; i<=N; i++){
//         for(int j=num; j>=1; j--){
//             printf("*");
//         }
//         printf("\n");
//         num--;
//     }
//     return 0;
// }