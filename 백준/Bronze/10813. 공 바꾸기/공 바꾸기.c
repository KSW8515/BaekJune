#include <stdio.h>

int main(void)
{
    // 바구니의 수 : n, 반복횟수 : m
    int n, m;
    scanf("%d %d", &n, &m);
    int basket[n];

    for (int i = 0; i < n; ++i)
    {
        basket[i] = (i + 1);
    }

    int a, b, temp;
    // a번 바구니와 b번 바구니의 값 교체
    for (int i = 0; i < m; ++i)
    {
        scanf("%d %d", &a, &b);
        temp = basket[a - 1];
        basket[a - 1] = basket[b - 1];
        basket[b - 1] = temp;
    }

    for (int i = 0; i < n; ++i)
    {
        printf("%d ", basket[i]);
    }
    printf("\n");

    return 0;
}