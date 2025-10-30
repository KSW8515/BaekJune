#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int recursion (const char *s, int l, int r, int *count)
{
    *count += 1;
    if(l >= r)
        return 1;
    else if (s[l] != s[r])
        return 0;
    else
        return recursion(s, l+1, r-1, count);
}

int isPalindrome (const char *s, int *count)
{
    return recursion(s, 0, strlen(s)-1, count);
}

int main()
{
    int n, count = 0;
    char *str;
    scanf("%d", &n);

    str = malloc(sizeof(char) * 1000);

    while(n-- > 0)
    {
        count = 0;
        scanf("%s", str);
        int res = isPalindrome(str, &count);
        printf("%d %d\n", res, count);
    }

    return 0;
}