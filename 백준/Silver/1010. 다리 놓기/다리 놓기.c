#include <stdio.h>

int main(void)
{
    int t, n, m;
    scanf("%d", &t);

    for (int i = 0; i < t; ++i)
    {
        scanf("%d %d", &n, &m);

        int res = 1;

        for (int j = 1; j <= n; ++j)
        {
            res *= (m - j + 1);
            res /= j;
        }

        printf("%d\n", res);
    }

    return 0;
}