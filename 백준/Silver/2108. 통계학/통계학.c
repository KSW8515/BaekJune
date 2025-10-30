#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void* pa, const void* pb);

int main(void)
{
    int n, len;
    scanf("%d", &n);
    len = n;
    int num[n];
    int map[8001] = {0, };
    int min[n];
    double sum = 0;

    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &num[i]);
        sum += num[i];
        map[num[i] + 4000] += 1;
    }

    qsort(num, n, sizeof(num[0]), compare);

    int maxV = 0;
    int minI = 0;
    for (int i = 0; i < 8001; ++i)
    {
        if (maxV < map[i])
        {
            minI = 0;
            maxV = map[i];
            min[minI++] = i - 4000;
        }
        else if (maxV == map[i] && map[i] != 0)
        {
            min[minI++] = i - 4000;
        }
    }

    int res1, res2, res3, res4;
    res1 = round(sum / len);
    res2 = num[n / 2];
    res4 = num[len - 1] - num[0];

    if (minI > 1)
    {
        qsort(min, minI, sizeof(min[0]), compare);
        res3 = min[1];
    }
    else
    {
        res3 = min[0];
    }

    printf("%d\n", res1);
    printf("%d\n", res2);
    printf("%d\n", res3);
    printf("%d\n", res4);

    return 0;
}

int compare(const void* pa, const void* pb)
{
    int* a = (int*)pa;
    int* b = (int*)pb;

    if (*a < *b)
        return -1;
    else if (*a == *b)
        return 0;
    else
        return 1;
}