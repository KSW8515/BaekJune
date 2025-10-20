#include <stdio.h>

int main(void)
{
    // N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.
    /* 
    첫째 줄에 정수의 개수 N (1 ≤ N ≤ 1,000,000)이 주어진다. 
    둘째 줄에는 N개의 정수를 공백으로 구분해서 주어진다. 
    모든 정수는 -1,000,000보다 크거나 같고, 1,000,000보다 작거나 같은 정수이다.
    */
    //첫째 줄에 주어진 정수 N개의 최솟값과 최댓값을 공백으로 구분해 출력한다.

    int n;
    scanf("%d", &n);
    
    int num[n];
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &num[i]);
    }

    int minN = num[0], maxN = num[0];
    
    for (int i = 0; i < n; ++i)
    {
        if (minN > num[i])
            minN = num[i];
        if (maxN < num[i])
            maxN = num[i];
    }

    printf("%d %d\n", minN, maxN);

    return 0;
}