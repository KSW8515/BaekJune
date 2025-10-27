#include <stdio.h>
#include <math.h>

int is_prime(int x);
int count_prime(int a, int b);

int main(void)
{
    int n;

    while(1)
    {
        scanf("%d", &n);
        
        if (n == 0)
            break;

        printf("%d\n", count_prime(n, 2 * n));
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

int count_prime(int a, int b)
{
    int count = 0;

    for (int i = a + 1; i <= b; ++i)
    {
        if (is_prime(i) == 1)
            count++;
    }

    return count;
}