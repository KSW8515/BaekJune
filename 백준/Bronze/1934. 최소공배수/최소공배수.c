#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int a, b;
    int mul;
    int r;

    for (int i = 0; i < n; ++i)
    {
        scanf("%d %d", &a, &b);
        mul = a * b;
        r = b;
        while(r != 0)
        {
            r = a % b;
            a = b;
            b = r;
        }
        printf("%d\n", mul / a);
    }

    return 0;
}