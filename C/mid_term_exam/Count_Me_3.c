#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        char str[10001];

        scanf("%s", &str);

        int Capital=0;
        int Small=0;
        int Number=0;

        for (int i = 0; str[i] != '\0'; i++)
        {
            if ('A' <= str[i] && str[i] <= 'Z')
            {
                Capital++;
            }
            else if ('a' <= str[i] && str[i] <= str[i])
            {
                Small++;
            }
            else if ('0' <= str[i] && str[i] <= '9')
            {
                Number++;
            }
        }
        printf("%d %d %d\n", Capital, Small, Number);
    }

    return 0;
}