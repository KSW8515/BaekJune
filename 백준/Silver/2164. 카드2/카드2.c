#include <stdio.h>
#include <stdlib.h>

int queue[500000];

int main(void)
{
    // 배열을 사용한 큐
    int n;
    scanf("%d", &n);

    int num, head, tail, count, t = 1;
    head = 0, tail = n - 1, count = n;
    
    for (int i = 0; i < n; ++i)
    {
        queue[i] = i + 1;
    }

    while(count > 1)
    {
        if (t % 2 == 1)
        {
            //pop
            head++;
            if (head >= n)
            {
                head = 0;
            }
            count--;
        }
        else
        {
            //pop
            num = queue[head];
            head++;
            if (head >= n)
            {
                head = 0;
            }
            //push
            tail++;
            if (tail >= n)
            {
                tail = 0;
            }
            queue[tail] = num;
        }
        t++;
    }

    printf("%d\n", queue[head]);

    return 0;
}