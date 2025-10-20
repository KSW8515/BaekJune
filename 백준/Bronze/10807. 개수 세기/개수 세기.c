#include <stdio.h>

int main(void)
{
    // 첫째 줄에 정수의 개수 N(1 ≤ N ≤ 100)이 주어진다. 
    // 둘째 줄에는 정수가 공백으로 구분되어져있다. 
    // 셋째 줄에는 찾으려고 하는 정수 v가 주어진다. 
    // 입력으로 주어지는 정수와 v는 -100보다 크거나 같으며, 100보다 작거나 같다.
    int n, v;
    int num[100];
    int count = 0;
    scanf("%d", &n);
    
    for (int i = 0; i < 100; ++i)
    {
        num[i] = 101;
    }

    for (int i = 0; i < n; ++i)
    {
        scanf("%d ", &num[i]);
    }

    scanf("%d", &v);

    for (int i = 0; i < 100; ++i)
    {
        if (num[i] == 101)
        {
            break;
        }
        if (num[i] == v)
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}