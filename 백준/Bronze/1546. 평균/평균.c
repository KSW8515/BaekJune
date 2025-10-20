#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    double score[n];
    double sum = 0;
    double hScore = -1;

    for (int i = 0; i < n; ++i)
    {
        scanf("%lf", &score[i]);

        if (hScore < score[i])
            hScore = score[i];
    }

    for (int i = 0; i < n; ++i)
    {
        sum += (score[i] / hScore * 100.0);
    }
    
    double result = sum / n;

    printf("%lf\n", result);
    
    return 0;
}