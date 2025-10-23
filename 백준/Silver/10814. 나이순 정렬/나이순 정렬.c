#include <stdio.h>
#include <string.h>

struct account
{
    int age;
    char name[101];
};

void mergeSort(struct account base[], struct account temp[], int low, int high);

int main(void)
{
    // 회원의 나이와 이름을 입력받아 나이가 어린순으로 출력하는 프로그램 (나이가 같은경우 먼저 가입한 사람이 앞으로)
    int n;
    scanf("%d", &n);

    struct account data[n];
    struct account temp[n];

    for (int i = 0; i < n; ++i)
    {
        scanf("%d %s", &data[i].age, data[i].name);
    }

    mergeSort(data, temp, 0, n - 1);

    for (int i = 0; i < n; ++i)
    {
        printf("%d %s\n", data[i].age, data[i].name);
    }

    return 0;
}

void mergeSort(struct account base[], struct account temp[], int low, int high)
{
    if (low >= high)
        return;

    int mid = (low + high) / 2;

    mergeSort(base, temp, low, mid);
    mergeSort(base, temp, mid + 1, high);

    int l_i = low;
    int r_i = mid + 1;

    for (int i = low; i <= high; ++i)
    {
        if (l_i > mid)
            temp[i] = base[r_i++];
        else if (r_i > high)
            temp[i] = base[l_i++];
        else if (base[l_i].age <= base[r_i].age)
            temp[i] = base[l_i++];
        else
            temp[i] = base[r_i++];
    }

    for (int i = low; i <= high; ++i)
    {
        base[i] = temp[i];
    }
}