#include <stdio.h>
#include <string.h>

void mergeSort(char str[][51], char temp[][51], int low, int high);

int main(void)
{
    // 알파벳 소문자로 이루어진 N개의 단어가 들어오면 아래와 같은 조건에 따라 정렬하는 프로그램을 작성하시오.
    // 길이가 짧은 것부터
    // 길이가 같으면 사전 순으로
    // 단, 중복된 단어는 하나만 남기고 제거해야 한다.
    int n;
    scanf("%d", &n);
    char str[n][51];
    char temp[n][51];

    for (int i = 0; i < n; ++i)
    {
        scanf("%s", str[i]);
    }

    mergeSort(str, temp, 0, n - 1);

    for (int i = 0; i < n - 1; ++i)
    {
        if (strcmp(str[i], str[i + 1]) == 0)
        {
            strcpy(str[i], " ");
        }
    }
    
    for (int i = 0; i < n; ++i)
    {
        if (strcmp(str[i], " ") != 0)
        {
            printf("%s\n", str[i]);
        }
    }
}

void mergeSort(char str[][51], char temp[][51], int low, int high)
{
    if (low >= high)
        return;
    
    int mid = (low + high) / 2;

    mergeSort(str, temp, low, mid);
    mergeSort(str, temp, mid + 1, high);

    int l_i = low;
    int r_i = mid + 1;

    for (int i = low; i <= high; ++i)
    {
        if (l_i > mid)
            strcpy(temp[i], str[r_i++]);
        else if (r_i > high)
            strcpy(temp[i], str[l_i++]);
        else
        {
            int l_l = strlen(str[l_i]);
            int r_l = strlen(str[r_i]);
            int cmp = strcmp(str[l_i], str[r_i]);
            if (l_l < r_l || (l_l == r_l && cmp < 0))
            {
                strcpy(temp[i], str[l_i++]);
            }
            else
            {
                strcpy(temp[i], str[r_i++]);
            }
        }
    }

    for (int i = low; i <= high; ++i)
    {
        strcpy(str[i], temp[i]);
    }
}