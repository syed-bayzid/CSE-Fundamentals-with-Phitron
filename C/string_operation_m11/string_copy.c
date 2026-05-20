#include <stdio.h>
int main() {
    char a[100], b[100];
    scanf("%s", a);
    scanf("%s", b);
    int length = strlen(a);
    for (int i = 0; i < length; i++) {
        a[i] = b[i];
    }
    printf("%s", b); 
    return 0;
}