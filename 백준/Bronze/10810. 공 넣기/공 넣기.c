#include <stdio.h>

int main(void)
{
    // 바구니의 수 : n, 반복횟수 : m
    int n, m;
    scanf("%d %d", &n, &m);
    int basket[n];

    for(int i = 0; i < n; ++i)
    {
        basket[i] = 0;
    }

    int a, b, c;

    // a번부터 b번까지 바구니에 c번 공을 넣는다.
    for(int i = 0; i < m; ++i)
    {
        scanf("%d %d %d", &a, &b, &c);

        for (int j = a; j <= b; ++j)
        {
            basket[j - 1] = c;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        printf("%d ", basket[i]);
    }
    printf("\n");

    return 0;
}