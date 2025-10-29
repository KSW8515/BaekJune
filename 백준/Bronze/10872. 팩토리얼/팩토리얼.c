#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    long long int result = 1;

    for (int i = 1; i <= n; ++i)
    {
        result *= i;
    }

    printf("%lld\n", result);

    return 0;
}