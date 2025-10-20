#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    char s[1001];

    for (int i = 0; i < n; ++i)
    {
        scanf("%s", s);

        printf("%c", s[0]);
        for (int j = 0; j < 1001; ++j)
        {
            if(s[j] == '\0')
            {
                printf("%c", s[j - 1]);
                break;
            }
        }
        printf("\n");
    }

    return 0;
}