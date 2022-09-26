#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

int Min(int x, int y)
{
    return x > y ? y : x;
}
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int l, h;
    long long s;
    if (abs(a - c) && abs(b - d))
    {
        s = Min(a, c) * Min(b, d);
    }
    else
    {
        if (a - c == 0 && b - d == 0)
        {
            s = a * b;
        }
        else
        {
            if (a - c == 0)
            {
                s = Min(b, d) * a;
            }
            else
            {
                s = Min(a, c) * b;
            }
        }
    }
    printf("%lld", s);
    return 0;
}
