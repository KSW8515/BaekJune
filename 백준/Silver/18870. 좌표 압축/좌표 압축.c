#include <stdio.h>

struct data
{
    int index;
    int value;
    int order;
};

// type = 0 : value / type = 1 : index
void mergeSort(struct data data[], struct data temp[], int low, int high, int type);

int main(void)
{
    int n, order = 0;
    scanf("%d", &n);

    struct data base[n];
    struct data temp[n];

    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &base[i].value);
        base[i].index = i;
        base[i].order = 0;
    }

    mergeSort(base, temp, 0, n - 1, 0);

    for (int i = 1; i < n; ++i)
    {
        if (base[i].value == base[i - 1].value)
            base[i].order = order;
        else
            base[i].order = ++order;
    }

    mergeSort(base, temp, 0, n - 1, 1);

    for (int i = 0; i < n; ++i)
    {
        printf("%d ", base[i].order);
    }

    return 0;
}

// type = 0 : value / type = 1 : index
void mergeSort(struct data data[], struct data temp[], int low, int high, int type)
{
    if (low >= high)
        return;
    
    int mid = (low + high) / 2;

    mergeSort(data, temp, low, mid, type);
    mergeSort(data, temp, mid + 1, high, type);

    int l_i = low;
    int r_i = mid + 1;

    for (int i = low; i <= high; ++i)
    {
        if (l_i > mid)
            temp[i] = data[r_i++];
        else if (r_i > high)
            temp[i] = data[l_i++];
        else
        {
            if (type == 0)
            {
                if (data[l_i].value <= data[r_i].value)
                    temp[i] = data[l_i++];
                else
                    temp[i] = data[r_i++];
            }
            else
            {
                if (data[l_i].index <= data[r_i].index)
                    temp[i] = data[l_i++];
                else
                    temp[i] = data[r_i++];
            }
        }
    }

    for (int i = low; i <= high; ++i)
    {
        data[i] = temp[i];
    }
}