#include <stdio.h>

int main(void)
{
    // 약수의 개수가 홀수인 경우 = 제곱수
    int n, count = 0;
    scanf("%d", &n);
    
    for (int i = 1; i * i <= n; i++)
        count++;
    
    printf("%d\n", count);
    
    return 0;
}