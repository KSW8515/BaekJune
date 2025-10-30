#include <stdio.h>

void merge_sort(int *data, int *temp, int low, int high, int *count, int k, int *res);

int main(void)
{
    int n, k, count = 0, fNum = 0;
    scanf("%d %d", &n, &k);

    int num[n];
    int temp[n];

    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &num[i]);
    }

    merge_sort(num, temp, 0, n - 1, &count, k, &fNum);

    if (count < k)
        printf("-1\n");
    else
        printf("%d\n",fNum);

    return 0;
}

void merge_sort(int *data, int *temp, int low, int high, int *count, int k, int *res)
{
    if (low >= high)
        return;

    int mid = (low + high) / 2;

    merge_sort(data, temp, low, mid, count, k, res);
    merge_sort(data, temp, mid + 1, high, count, k, res);

    int l_i = low;
    int r_i = mid + 1;

    for (int i = low; i <= high; ++i)
    {
        if (l_i > mid)
            temp[i] = data[r_i++];
        else  if (r_i > high)
            temp[i] = data[l_i++];
        else if (data[l_i] > data[r_i])
            temp[i] = data[r_i++];
        else
            temp[i] = data[l_i++];
    }

    
    for (int i = low; i <= high; ++i)
    {
        data[i] = temp[i];
        (*count) = (*count) + 1;
        if (*count == k)
            *res = data[i];
    }
}