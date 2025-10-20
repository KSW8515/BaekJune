#include <stdio.h>

int main(void)
{
    // 입력은 총 28줄로 각 제출자(학생)의 출석번호 n(1 ≤ n ≤ 30)가 한 줄에 하나씩 주어진다. 출석번호에 중복은 없다.
    int num[30] = {0, };
    int n;

    for (int i = 0; i < 28; ++i)
    {
        scanf("%d", &n);
        num[n - 1] = 1;
    }

    for (int i = 0; i < 30; ++i)
    {
        if (num[i] == 0)
            printf("%d\n", i + 1);
    }

    return 0;
}