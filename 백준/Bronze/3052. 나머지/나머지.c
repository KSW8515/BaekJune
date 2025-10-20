#include <stdio.h>

int main(void)
{
    // 첫째 줄에, 42로 나누었을 때, 서로 다른 나머지가 몇 개 있는지 출력한다.
    int num[42] = {0, };
    int n, temp, count;

    count = 10;

    for (int i = 0; i < 10; ++i)
    {
        scanf("%d", &n);

        temp = n % 42;

        if (num[temp] == 0)
        {
            num[temp] = 1;
        }
        else
        {
            count--;
        }
    }

    printf("%d\n", count);

    return 0;
}