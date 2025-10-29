#include <stdio.h>

int main(void)
{
    int n, k;
    scanf("%d %d", &n, &k);

    int m = 1, s = 1;

    for (int i = 1; i <= k; ++i)
    {
        m *= n--;
    }

    for (int i = 1; i <= k; ++i)
    {
        s *= i;
    }

    int result = m / s;

    printf("%d\n", result);

    return 0;
}