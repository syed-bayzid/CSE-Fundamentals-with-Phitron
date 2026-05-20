#include <stdio.h>

int main()
{
    char S[10005];
    scanf("%s", S);

    int freq[26] = {0};

    for (int i = 0; S[i] != '\0'; i++)
    {
        int value = S[i] - 'a';
        freq[value]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c - %d\n", i + 'a', freq[i]);
        }
    }

    return 0;
}