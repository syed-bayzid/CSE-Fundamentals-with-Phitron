#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);

        int totalWork = M1 * D;
        int totalFarmer = M1+M2;
        int workingDays = totalWork / totalFarmer;
        int fewerWorkDays = D-workingDays;


        printf("%d\n", fewerWorkDays);
    }
    return 0;
}