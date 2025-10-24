#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b);

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);

    int L = n + m;
    char name[L][21];
    
    for (int i = 0; i < n; ++i)
    {
        scanf("%s", name[i]);
    }

    for (int j = 0; j < m; ++j)
    {
        scanf("%s", name[n + j]);
    }

    // stlib의 qsort 사용해보자
    // qsort(정렬할 대상의 주소, 대상의 개수, 대상의 크기, 정렬 방식(함수));
    // 일반적으로 정렬 함수는 compare라는 명칭으로 함수를 만든다.
    // 위와 같은 경우 대상의 개수는 L 크기는 sizeof(char) * 21이 된다.

    //qsort(name, L, sizeof(char) * 21, compare);
    qsort(name, L, sizeof(name[0]), compare);
    
    int count = 0;

    for (int i = 0; i < L - 1; ++i)
    {
        if (strcmp(name[i], name[i + 1]) == 0)
        {
            count++;
        }
    }

    printf("%d\n", count);
    
    for (int i = 0; i < L - 1; ++i)
    {
        if (strcmp(name[i], name[i + 1]) == 0)
        {
            printf("%s\n", name[i]);
            i++;
        }
    }

    return 0;
}

int compare(const void *a, const void *b)
{
    return strcmp((const char *)a, (const char *)b);
}