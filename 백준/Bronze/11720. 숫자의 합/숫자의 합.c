#include <stdio.h>

int main(void)
{
    int n, sum = 0;
    
    scanf("%d", &n);

    char num[n];

    scanf("%s", num);

    for(int i = 0; i < n; ++i)
    {
        sum += (((int)num[i]) - 48);
    }

    printf("%d\n", sum);

    return 0;
}