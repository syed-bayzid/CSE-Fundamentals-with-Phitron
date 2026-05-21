#include <stdio.h>
int main()
{
    char str[1000001];
    fgets(str, 1000001, stdin);
    for (int i = 0; str[i] != '\\'; i++)
    {
        printf("%c", str[i]);
    }
    return 0;
}

// input:
// TC-1: Egyptian collegiate programming\ contest
// TC-2: google \or facebook
