#include <stdio.h>
int main() {
    char str[100001];
    scanf("%s", str);
    
    int countConsonants = 0;

    for(int i=0; str[i] != '\0'; i++) {
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u') {
            countConsonants++;
        }
    }
    printf("%d", countConsonants);
    return 0;
}