#include <stdio.h>
#include <string.h>

void mergeSort(char A[][501], char B[][501], int low, int high);

int main(void)
{
    // n개의 문자열 집합 S에 m개의 문자들중 해당 집합에 포함되는 문자의 수

    int n, m;
    scanf("%d %d", &n, &m);

    char s[n][501];
    char temp[n][501];
    char x[m][501];

    for (int i = 0; i < n; ++i)
    {
        scanf("%s", s[i]);
    }

    for (int i = 0; i < m; ++i)
    {
        scanf("%s", x[i]);
    }

    int count = 0;

    mergeSort(s, temp, 0, n - 1);

    // 탐색부분 시간 초과가 나온다
    // 방법1. 집합S를 정렬하여 이진탐색 방식으로해결한다?
    for (int i = 0; i < m; ++i)
    {
        int l = 0;
        int r = n - 1;
        
        while(l <= r)
        {
            int mid = (l + r) / 2;
            int cmp = strcmp(x[i], s[mid]);

            if (cmp == 0)
            {
                count++;
                break;
            }
            else if (cmp < 0)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
    }
    
    printf("%d\n", count);

    return 0;
}

void mergeSort(char A[][501], char B[][501], int low, int high)
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
            strcpy(B[i], A[r_i++]);
        else if (r_i > high)
            strcpy(B[i], A[l_i++]);
        else
        {
            int cmp = strcmp(A[l_i], A[r_i]);

            if (cmp < 0)
            {
                strcpy(B[i], A[l_i++]);
            }
            else
            {
                strcpy(B[i], A[r_i++]);
            }
        }
    }

    for (int i = low; i <= high; ++i)
    {
        strcpy(A[i], B[i]);
    }
}