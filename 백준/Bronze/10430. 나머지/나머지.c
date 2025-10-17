#include <stdio.h>

int main(void)
{
    // 첫째 줄에 A, B, C가 순서대로 주어진다. (2 ≤ A, B, C ≤ 10000)
    // 첫째 줄에 (A+B)%C, 둘째 줄에 ((A%C) + (B%C))%C, 셋째 줄에 (A×B)%C, 넷째 줄에 ((A%C) × (B%C))%C를 출력한다.
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", (a+b)%c);
    printf("%d\n", ((a%c) + (b%c))%c);
    printf("%d\n", (a*b)%c);
    printf("%d\n", ((a%c) * (b%c))%c);
}