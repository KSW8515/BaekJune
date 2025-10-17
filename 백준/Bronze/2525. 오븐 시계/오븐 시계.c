#include <stdio.h>

int main(void)
{
    int h, m;
    int time;
    scanf("%d %d", &h, &m);
    scanf("%d", &time);
    
    h += time / 60;
    m += time % 60;

    if (m >= 60)
    {
        m -= 60;
        h += 1;
    }

    if (h >= 24)
    {
        h -= 24;
    }

    printf("%d %d", h, m);
}