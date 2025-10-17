#include <stdio.h>

int main(void)
{
    int n = 0;
    int a, b;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; ++i)
    {
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d\n", i, (a + b));
    }
}