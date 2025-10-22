#include <stdio.h>

int main(void)
{
    int n, m;
    int sum = 0;
    int mSum = 0;
    scanf("%d %d", &n, &m);

    int num[n];

    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < n - 2; ++i)
    {
        for (int j = i + 1; j < n - 1; ++j)
        {
            for (int k = j + 1; k < n; ++k)
            {
                sum = num[i] + num[j] + num[k];

                if (sum <= m && mSum < sum)
                {
                    mSum = sum;
                }
            }
        }
    }

    printf("%d\n", mSum);

    return 0;
}