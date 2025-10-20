#include <stdio.h>

int main(void)
{
    char s[1000];
    int n;
    scanf("%s", s);     // 배열 전체에 넣는것임으로 첫번째 주소값이필요하다
    scanf("%d", &n);

    printf("%c\n", s[n - 1]);
    return 0;
}