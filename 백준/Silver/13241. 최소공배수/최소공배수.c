#include <stdio.h>

int main(void)
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    long long int mul;
    long long int r;

    mul = a * b;
    r = b;
    while(r != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    printf("%lld\n", mul / a);

    return 0;
}