#include <stdio.h>
#include <string.h>

int is_palindrome(char str[])
{
    char rev[1001];
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        rev[i] = str[len - i - 1];
    }

    rev[len] = '\0';

    for (int i = 0; i < len; i++)
    {
        if (str[i] != rev[i])
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    char str[1001];
    scanf("%s", str);

    int isPalindrome = is_palindrome(str);

    if (isPalindrome)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}