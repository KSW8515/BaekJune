#include <stdio.h>
#include <math.h>

long long least_prime_number(long long x);

int main(void)
{
    int n;
    long long x;
    scanf("%d", &n);

    for(int i = 0; i < n; ++i)
    {
        scanf("%lld", &x);
        printf("%lld\n", least_prime_number(x));
    }
}

long long least_prime_number(long long x)
{
    if (x < 2)
        return 2;

    while(1)
    {
        int flag = 0;
        // 형변환 없이 하면 소수점이 버려지면서 틀리는 경우가 나옴
        long long n = (long long)sqrt((double)x);
        for (long long i = 2; i <= n; ++i)
        {
            if (x % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            break;
        x++;
    }
    return x;
}