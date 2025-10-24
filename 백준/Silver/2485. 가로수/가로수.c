#include <stdio.h>

int gcd(int a, int b)
{
    int r = 1;

    while(r != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }

    return a;
}

int main(void)
{
    int n;
    scanf("%d", &n);

    int first, cur, prev, diff, g;

    scanf("%d", &first);
    scanf("%d", &cur);
    g = cur - first;
    prev = cur;

    for (int i = 0; i < n - 2; ++i)
    {
        scanf("%d", &cur);
        diff = cur - prev;
        g = gcd(g, diff);
    }

    int total_count = (cur - first) / g + 1;
    int need_count = total_count - n;

    printf("%d\n", need_count);

    return 0;
}