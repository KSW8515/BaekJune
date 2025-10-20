#include <stdio.h>

int main(void)
{
    // n개의 바구니, m번 반복
    int n, m;
    int a, b;
    scanf("%d %d", &n, &m);
    int basket[n];
    int temp[n];

    for (int i = 0; i < n; ++i)
    {
        basket[i] = i + 1;
    }

    // a, b입력 a~b바구니 역순으로 뒤집기
    for (int i = 0; i < m; ++i)
    {
        scanf("%d %d", &a, &b);

        for (int j = 0; j < (b - a + 1); ++j)
        {
            temp[j] = basket[b - 1 - j];
        }
        for (int j = 0; j < (b - a + 1); ++j)
        {
            basket[a - 1 + j] = temp[j];
        }
    }

    for (int i = 0; i < n; ++i)
    {
        printf("%d ", basket[i]);
    }
    printf("\n");

    return 0;
}