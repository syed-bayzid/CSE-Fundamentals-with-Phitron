#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int hash = 1;
    int space = N - 1;

    // Upper part (including middle)
    for (int i = 1; i <= N; i++)
    {
        // print spaces
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= hash; j++)
        {
            if (i % 2 != 0){
                printf("#");
            }
            else{
                printf("-");
            }
        
        }

        printf("\n");

        hash += 2;
        space--;
    }

    // Lower part
    hash -= 4;
    space = 1;

    for (int i = N - 1; i >= 1; i--)
    {
        // print spaces
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= hash; j++)
        {
            if (i % 2 != 0){
                printf("#");
            }
            else{
                printf("-");
            }
        }

        printf("\n");

        hash -= 2;
        space++;
    }

    return 0;
}