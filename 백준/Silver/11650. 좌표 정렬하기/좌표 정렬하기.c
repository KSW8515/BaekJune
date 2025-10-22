#include <stdio.h>

struct point
{
    int x;
    int y;
};

void mergeSort(struct point A[], int low, int high, struct point B[]);

int main(void)
{
    int n;

    scanf("%d", &n);

    struct point p[n];
    struct point t[n];
    struct point temp;
    for (int i = 0; i < n; ++i)
    {
        scanf("%d %d", &p[i].x, &p[i].y);
    }

    // 현재 정렬방식은 O(n^2)으로 시간초과가 나온다
    // 정렬방식 계선이 필요
    mergeSort(p, 0, n - 1, t);

    // for (int i = 0; i < n; ++i)
    // {
    //     for (int j = 0; j < n - i; ++j)
    //     {
    //         if (p[j].x > p[j + 1].x)
    //         {
    //             temp = p[j];
    //             p[j] = p[j + 1];
    //             p[j + 1] = temp;
    //         }
    //         else if (p[j].x == p[j + 1].x)
    //         {
    //             if (p[j].y > p[j + 1].y)
    //             {
    //                 temp = p[j];
    //                 p[j] = p[j + 1];
    //                 p[j + 1] = temp;
    //             }
    //         }
    //     }
    // }

    for (int i = 0; i < n; ++i)
    {
        printf("%d %d\n", t[i].x, t[i].y);
    }

    return 0;
}

void mergeSort(struct point A[], int low, int high, struct point B[])
{
    if (low >= high)
        return;
    
    int mid = (low + high) / 2;

    mergeSort(A, low, mid, B);
    mergeSort(A, mid + 1, high, B);

    int i = low, j = mid + 1, k = low;
    for (; k <= high; ++k)
    {
        if (j > high)
            B[k] = A[i++];
        else if (i > mid)
            B[k] = A[j++];
        else if (A[i].x < A[j].x || (A[i].x == A[j].x && A[i].y < A[j].y))
            B[k] = A[i++];
        else
            B[k] = A[j++];
    }
    
     for(i=low;i<=high;++i) 
        A[i] = B[i];
}