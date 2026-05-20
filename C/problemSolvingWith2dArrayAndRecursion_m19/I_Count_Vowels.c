#include <stdio.h>

int count_vowels(char S[], int i)
{

    if (S[i] == '\0')
        return 0;
    int vCount = count_vowels(S, i + 1);
    if (S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u' ||
        S[i] == 'A' || S[i] == 'E' || S[i] == 'I' || S[i] == 'O' || S[i] == 'U')
        return vCount + 1;
    else
        return vCount;
}

int main()
{
    char S[201];
    fgets(S, 201, stdin);
    int res = count_vowels(S, 0);
    printf("%d\n", res);
    return 0;
}