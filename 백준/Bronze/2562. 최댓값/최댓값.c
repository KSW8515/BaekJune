#include <stdio.h>

int main(void)
{
    int num[9];
    int maxN, maxI;

    for (int i = 0; i < 9; ++i)
    {
        scanf("%d", &num[i]);
    }

    maxN = num[0];
    maxI = 0;

    for (int i = 0; i < 9; ++i)
    {
        if (maxN < num[i])
        {
            maxN = num[i];
            maxI = i;
        }
    }

    printf("%d\n%d\n", maxN, (maxI + 1));

    return 0;
}