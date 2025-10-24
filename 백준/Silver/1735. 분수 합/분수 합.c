#include <stdio.h>

int main(void)
{
    long long int a, b;
    long long int c, d;

    scanf("%lld %lld", &a, &b); // a/b
    scanf("%lld %lld", &c, &d); // c/d

    // b와 d의 최소 공배수 

    long long int mul = b * d;
    long long int r = 1;
    long long int cb = b, cd = d;

    while(r != 0)
    {
        r = cb % cd;
        cb = cd;
        cd = r;
    }
    // b 와 d의 최대 공약수 cb
    long long int rm = mul / cb;
    long long int rs = (a * rm / b) + (c * rm /d);

    long long int crs = rs, crm = rm;
    r = 1;

    while(r != 0)
    {
        r = crm % crs;
        crm = crs;
        crs = r;
    }
    
    printf("%lld %lld\n", rs / crm, rm / crm);

    return 0;
}