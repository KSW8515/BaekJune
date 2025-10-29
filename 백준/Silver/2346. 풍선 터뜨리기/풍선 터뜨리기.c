#include <stdio.h>

int main(void)
{
    int n;

    scanf("%d", &n);

    int deque[n];
    int value[n];

    int head = 0;
    int tail = n - 1;
    int num;
    int temp;

    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &value[i]);
        deque[i] = i + 1;
    }

    printf("%d ", deque[head]);
    num = value[deque[head] - 1];

    head++;

    if (head >= n)
        head = 0;

    for (int i = 0; i < n - 1; ++i)
    {
        if (num > 0)
        {
            // front pop * num tail push * num - 1
            for (int j = 0; j < num - 1; ++j)
            {
                temp = deque[head];
                head++;
                if (head >= n)
                    head = 0;
                
                tail++;
                if (tail >= n)
                    tail = 0;
                deque[tail] = temp;
            }
            printf("%d ", deque[head]);
            num = value[deque[head] - 1];
            head++;
            if (head >= n)
                head = 0;
        }
        else
        {
            // tail pop * num front push * num - 1
            for (int j = 0; j < (num * -1) - 1; ++j)
            {
                temp = deque[tail];
                tail--;
                if (tail < 0)
                    tail = n - 1;
                
                head--;
                if (head < 0)
                    head = n - 1;
                deque[head] = temp;
            }
            printf("%d ", deque[tail]);
            num = value[deque[tail] - 1];
            tail--;
            if (tail < 0)
                tail = n - 1;
        }
    }

    return 0;
}