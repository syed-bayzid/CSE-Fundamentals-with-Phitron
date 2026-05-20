#include <stdio.h>

void rec(int N)
{
    if (N == 0)
    {
        return;
    }
    int last = N % 10;
    int priv_num = N / 10;
    rec(priv_num);
    printf("%d ", last);
}

int main()
{
    int T;
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++)
    {
        
        int N;
        scanf("%d", &N);
        if(N==0)
        {
            printf("0\n");
            continue;
        }
        rec(N);
        printf("\n");
    }

    return 0;
}