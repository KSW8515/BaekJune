#include <stdio.h>
#include <math.h>

int is_prime(int x);

int main(void)
{
    // m이상 n이하 의 소수를 전부 출력하기

    int m, n;

    scanf("%d %d", &m, &n);

    for (int i = m; i <=n; ++i)
    {
        if (is_prime(i))
        {
            printf("%d\n", i);
        }
    }

    return 0;
}

int is_prime(int x)
{
    if (x < 2)
        return 0;
    
    int limit = (int)sqrt((double)x);

    int result = 1;

    for (int i = 2; i <= limit; ++i)
    {
        if (x % i == 0)
        {
            result = 0;
            break;
        }
    }

    return result;
}