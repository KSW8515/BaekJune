#include <stdio.h>

int map[20000001];

int main(void)
{
    int n;
    scanf("%d", &n);
    int my_card[n];
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &my_card[i]);
    }

    int m;
    scanf("%d", &m);
    int check_card[m];
    for (int i = 0; i < m; ++i)
    {
        scanf("%d", &check_card[i]);
    }

    for (int i = 0; i < 20000001; ++i)
    {
        map[i] = 0;
    }

    for (int i = 0; i < n; ++i)
    {
        map[my_card[i] + 10000000] = 1;
    }

    for (int i = 0; i < m; ++i)
    {
        printf("%d ", map[check_card[i] + 10000000]);
    }
}