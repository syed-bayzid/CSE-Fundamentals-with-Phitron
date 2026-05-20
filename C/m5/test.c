#include <stdio.h>
int main()
{
    int ch1, ch2, ch3;
    scanf("%d %d %d", &ch1, &ch2, &ch3);
    // min
    if (ch1 <= ch2 && ch1 <= ch3)
    {
        printf("%d ", ch1);
    }
    else if (ch2 <= ch1 && ch2 <= ch3)
    {
        printf("%d ", ch2);
    }
    else if (ch3 <= ch1 && ch3 <= ch2)
    {
        printf("%d ", ch3);
    }

    // max
    if (ch1 >= ch2 && ch1 >= ch3)
    {
        printf("%d", ch1);
    }
    else if (ch2 >= ch1 && ch2 >= ch3)
    {
        printf("%d", ch2);
    }
    else if (ch3 >= ch1 && ch3 >= ch2)
    {
        printf("%d", ch3);
    }
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     char ch;
//     scanf("%c", &ch);
//     if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
//     {
//         printf("ALPHA\n");
//         if(ch >='a' && ch <= 'z'){
//             printf("IS SMALL");
//         }
//         else{
//             printf("IS CAPITAL");
//         }
//     }
//     else if(ch >= '0' && ch <= '9')
//     {
//         printf("IS DIGIT");
//     }
// }

// #include <stdio.h>
// int main() {
//     char ch;
//     scanf("%c", &ch);
//     if(ch >= 'a' && ch <= 'z') {
//         ch = ch - 32;
//             printf("%c", ch);
//     }
//     else{
//         ch = ch + 32;
//         printf("%c", ch);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int X;
//     scanf("%d", &X);
//     int first_digit = X / 1000;
//     if(first_digit%2 == 0){
//             printf("EVEN");
//     }
//     else{
//              printf("ODD");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int A, B;
//     scanf("%d %d", &A, &B);
//     if(A>=B){
//             printf("Yes");
//     }
//     else{
//             printf("No");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int A, B;
//     scanf("%d %d", &A, &B);
//     if(A%B==0){
//             printf("Multiples");
//     }
//     else if(B%A==0){
//             printf("Multiples");
//     }
//     else{
//             printf("No Multiples");
//     }
//     return 0;
// }