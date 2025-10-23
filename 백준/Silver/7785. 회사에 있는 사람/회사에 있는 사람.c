#include <stdio.h>
#include <string.h>

struct data
{
    char name[6];
    char type[6];
};

void mergeSort(struct data A[], struct data B[], int low, int high);

int main(void)
{
    int n;
    scanf("%d", &n);

    struct data log[n];
    struct data temp[n];

    for (int i = 0; i < n; ++i)
    {
        scanf("%s %s", log[i].name, log[i].type);
    }

    mergeSort(log, temp, 0, n - 1);

    for (int i = n - 1; i >= 0; --i)
    {
        if (strcmp(log[i].name, log[i - 1].name) == 0)
            --i;
        else
            printf("%s\n", log[i].name);
    }

    return 0;
}

void mergeSort(struct data A[], struct data B[], int low, int high)
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
            B[i] = A[r_i++];
        else if (r_i > high)
            B[i] = A[l_i++];
        else
        {
            int cmp = strcmp(A[l_i].name, A[r_i].name);

            if (cmp <= 0)
                B[i] = A[l_i++];
            else
                B[i] = A[r_i++];
        }
    }

    for (int i = low; i <= high; ++i)
    {
        A[i] = B[i];
    }
}