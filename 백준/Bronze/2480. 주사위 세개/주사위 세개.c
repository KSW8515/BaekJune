#include <stdio.h>

int main(void)
{
    // 1에서부터 6까지의 눈을 가진 3개의 주사위를 던져서 다음과 같은 규칙에 따라 상금을 받는 게임이 있다.
    // 같은 눈이 3개가 나오면 10,000원+(같은 눈)×1,000원의 상금을 받게 된다.
    // 같은 눈이 2개만 나오는 경우에는 1,000원+(같은 눈)×100원의 상금을 받게 된다.
    // 모두 다른 눈이 나오는 경우에는 (그 중 가장 큰 눈)×100원의 상금을 받게 된다.

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c)
    {
        printf("%d", 10000 + a * 1000);
    }
    else if (a != b && b != c && a != c)
    {
        if (a > b && a > c)
            printf("%d", 100 * a);
        else if (b > a && b > c)
            printf("%d", 100 * b);
        else
            printf("%d", 100 * c);
    }
    else
    {
        if (a == b)
            printf("%d", 1000 + a * 100);
        else if (a == c)
            printf("%d", 1000 + a * 100);
        else
            printf("%d", 1000 + b * 100);
    }
}