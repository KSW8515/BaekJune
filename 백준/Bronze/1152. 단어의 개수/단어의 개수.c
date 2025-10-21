#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // scanf함수는 공백은만나면 입력이 종료된다
    // %[]를 '스캔셋 (scanset)'이라고 하며, 이를 이용해 특정 문자 (또는 문자 범위)를 지정하면 scanf 함수가 이를 고려하여 스캔을 합니다.
    char s[1000001];
    scanf("%[^\n]s", s);
    int count = 0;
    int i = 0;
    while(s[i] != '\0')
    {
        if (i != 0 && s[i] == ' ')
            count++;
        i++;
    }

    if (s[i - 1] != ' ')
        count++;
        
    printf("%d\n", count);

    return 0;
}