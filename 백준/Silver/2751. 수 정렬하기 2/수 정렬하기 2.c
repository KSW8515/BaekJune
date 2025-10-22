#include <stdio.h>

void mergeSort(int A[], int B[], int low, int high);

int main(void)
{
    int n = 0;
    scanf("%d", &n);

    int num[n];

    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &num[i]);
    }

    int temp[n];

    mergeSort(num, temp, 0, n - 1);

    for (int i = 0; i < n; ++i)
    {
        printf("%d\n", num[i]);
    }

    return 0;
}

void mergeSort(int A[], int B[], int low, int high)
{
    if (low >= high)
        return;
    
    int mid = (low + high) / 2;

    mergeSort(A, B, low, mid);
    mergeSort(A, B, mid + 1, high);

    int l_i = low;
    int r_i = mid + 1;

    for (int i = low; i <= high; ++i)
    {
        if (l_i > mid)
        {
            B[i] = A[r_i++];
        }
        else if (r_i > high)
        {
            B[i] = A[l_i++];
        }
        else if (A[l_i] <= A[r_i])
        {
            B[i] = A[l_i++];
        }
        else
        {
            B[i] = A[r_i++];
        }
    }

    for (int i = low; i <= high; ++i)
    {
        A[i] = B[i];
    }
}