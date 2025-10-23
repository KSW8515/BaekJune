#include <stdio.h>
#define NUM 20000001
#define SPACE 10000000
int map[20000001];
int tar[500000];

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < NUM; ++i)
    {
        map[i] = 0;
    }

    int temp;
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &temp);

        map[temp + SPACE] += 1;
    }

    int m;
    scanf("%d", &m);

    for (int i = 0; i < m; ++i)
    {
        scanf("%d", &tar[i]);
    }

    for (int i = 0; i < m; ++i)
    {
        printf("%d ", map[tar[i] + SPACE]);
    }

    return 0;
}