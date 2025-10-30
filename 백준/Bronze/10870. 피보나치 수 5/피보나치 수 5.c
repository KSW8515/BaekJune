#include <stdio.h>

long long int fibonacci(long long int n);

int main(void)
{
    int n;
    scanf("%d", &n);

    printf("%lld\n", fibonacci(n));

    return 0;
}

long long int fibonacci(long long int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}