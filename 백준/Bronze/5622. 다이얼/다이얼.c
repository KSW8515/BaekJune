#include <stdio.h>

int main(void)
{
    int second[26] = {3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10};
    int time = 0;
    char s[16];
    
    scanf("%s", s);

    for (int i = 0; i < 16; ++i)
    {
        if (s[i] == '\0')
            break;
        time += second[(int)s[i] - 65];
    }

    printf("%d\n", time);

    return 0;
}