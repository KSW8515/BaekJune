#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // 배열을 사용한 큐
    int n, k;
    scanf("%d %d", &n, &k);
    int queue[n];
    int result[n];

    
    int num, head, tail, count, t = 1, index = 0;
    head = 0, tail = n - 1, count = n;
    
    for (int i = 0; i < n; ++i)
    {
        queue[i] = i + 1;
    }

    while(count > 1)
    {
        if (t % k == 0)
        {
            //pop
            num = queue[head];
            head++;
            if (head >= n)
            {
                head = 0;
            }
            count--;
            result[index++] = num;
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

    printf("<");
    for (int i = 0; i < n - 1; ++i)
    {
        printf("%d, ", result[i]);
    }
    printf("%d>", queue[head]);

    return 0;
}