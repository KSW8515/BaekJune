#include <stdio.h>

int main(void)
{
    char s[101];
    scanf("%s", s);

    int count = 0;

    for (int i = 0; i < 101; ++i)
    {
        if (s[i] == '\0')
            break;
            
        count++;
    }

    printf("%d\n", count);

    return 0;
}