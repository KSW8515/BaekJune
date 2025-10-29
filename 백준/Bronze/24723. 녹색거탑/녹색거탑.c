#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    long long int result = 1;

    for (int i = 0; i < n; ++i)
    {
        result *= 2;
    }

    printf("%lld\n", result);

    return 0;
}