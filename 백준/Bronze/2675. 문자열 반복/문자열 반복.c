#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    int n;
    char s[21];

    for(int i = 0; i < t; ++i)
    {
        scanf("%d %s", &n, s);

        for (int j = 0; j < 21; ++j)
        {
            if (s[j] == '\0')
                break;
            
            for (int k = 0; k < n; ++k)
            {
                printf("%c", s[j]);
            }
        }
        printf("\n");
    }

    return 0;
}