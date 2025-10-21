#include <stdio.h>

int main(void)
{
    int num[26];
    char s[101];

    for (int i = 0; i < 26; ++i)
    {
        num[i] = -1;
    }

    scanf("%s", s);

    for (int i = 0; i < 101; ++i)
    {
        if (s[i] == '\0')
            break;
        if (num[(int)s[i] - 97] == -1)
        {
            num[(int)s[i] - 97] = i;
        }
    }

    for (int i = 0; i < 26; ++i)
    {
        printf("%d ", num[i]);
    }

    return 0;
}