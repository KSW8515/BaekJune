#include <stdio.h>

long long int recursion(int n);

int main(void)
{
    int n;
    scanf("%d", &n);

    printf("%lld\n", recursion(n));

    return 0;
}

long long int recursion(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * recursion(n - 1);
}