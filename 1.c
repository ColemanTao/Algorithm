#include<stdio.h>
#include<math.h>
int su(int n)               
{
    if (n <= 1)
    return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        return 0;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d", &n);
    if (su(n) && (su(n + 6) || su(n - 6)))
    {
        printf("Yes\n");
        if (su (n - 6))
        printf("%d", n - 6);
        else
        printf("%d", n + 6);
    }
    else
    {
    printf("No\n");
    for (int i = n + 1; ; i++)
    {
        if (su (i) && (su(i + 6) || su(i - 6)))
        {
            printf("%d", i);
            break;
        }
    }
    }
    return 0;
}
#include<stdio.h>
int main()
{
    printf("**************************\n");
    printf("Hello World!\n");
    printf("**************************");
}
#include<stdio.h>
int main()
{
    printf("  *\n * *\n*****\n");
    return 0;
}
#include<stdio.h>
int main()
{
    int n;
    
    return 0;
}
#include<stdio.h>
int main()
{
    char a[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &a[i]);
        a[i] += 4;
    }
    scanf("%s", a);
    return 0;       
}
#include<stdio.h>
int main()
{
    char s[11];
    gets(s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        s[i] = (s[i] + 4 - 'A') % 26 + 'A';
        if (s[i] >= 'a' && s[i] <= 'Z')
        s[i] = (s[i] + 4 - 'a') % 26 + 'a';
    }
    puts(s);
    return 0;
#include<stdio.h>
int main()
{
    double F;
    scanf("%lf", &F);
    printf("c=%.2lf", 5 * (F - 32) / 9);
    return 0;
}
#include<stdio.h>
int plu(int a)
{
    return a * a;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", plu(a) + plu(b));
    return 0;
}
#include<stdio.h>
double t = 3.1415;
int main()
{
    double r;
    scanf("%lf", &r);
    printf("%.2lf", r * r * t);
    return 0;
}
#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("C:%d\nS:%d", 2 * (a + b), a * b);
    return 0;
}
#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int max = (a > b ? a : b) > c ? (a > b ? a : b) : c;
    printf("%d", max);
    return 0;
}
#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int max = (a > b ? a : b) > c ? (a > b ? a : b) : c;
    int min = (a < b ? a : b) < c ? (a < b ? a : b) : c;
    int mid = a + b + c - max - min;
    printf("%d %d %d", min, mid, max);
    return 0;
}
#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    if (x < 1)
    printf("%d", x);
    else if(x >= 10)
    printf("%d", 3 * x - 11);
    else
    printf("%d", 2 * x - 1); 
    return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];
    scanf("%s", str);
    int len = strlen(str);
    printf("%d\n", len);
    for (int i = 0; i < len; i++)
    {
        printf("%c ", str[i]);
    }
    printf("\n");
    for (int i = len - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int a[10];
    int avg = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        avg += a[i];
    }
    avg /= 10;
    int n = 0;
    for (int i = 0; i < 10; i++)
    {
        if (a[i] > avg)
        n++;
    }
    printf("%d", n);
    return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
    int n, i;
    int sum = 0;
    scanf("%d", &n);
    int temp = n;
    while(temp)
    {
        i = temp % 10;
        sum += pow (i, 3);
        temp /= 10;
    }
    if (sum == n)
        printf("1");
    else
    printf("0");
    return 0;
}
#include<stdio.h>
int su(int n)
{
    int temp = n;
    int i, sum = 0;
    while(temp)
    {
        i = temp % 10;
        sum += pow (i, 3);
        temp /= 10;
    }
    if (sum == n)
    return n;
    else
    return 0;
}
int main()
{
    for (int i = 100; i < 1000; i++)
    {
        if (su(i))
        printf("%d\n", su(i));
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int a, b, c;
    int sum = 0;
    for (int i = 100; i < 1000; i++)
    {
        a = i % 10;
        b = i / 10 % 10;
        c = i / 100;
        sum = pow (a, 3) + pow (b, 3) + pow (c, 3);
        if (sum == i)
        printf("%d\n", sum);
    }
    return 0;
}
#include<stdio.h>
int main()
{
    double F;
    scanf("%lf", &F);
    printf("%.2lf", 5 * (F - 32) / 9);
    return 0;
}
#include<stdio.h>
void fun(int n)
{
    int a[100], sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
        sum += a[i];
    }
    printf("%d", sum);
}
int main()
{
    int n;
    scanf("%d", &n);
    fun(n);
    return 0;
}
#include<stdio.h>
int main()
{
    int sum = 0, t = 2;
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += t;
        t += 3;
    }
    printf("%d", sum);
    return 0;
}
#include<stdio.h>
int main(){
    int i;
    for(i=100;i<=999;i++){
        if(i==(i/100)*(i/100)*(i/100)+((i%100)/10)*((i%100)/10)*((i%100)/10)+(i%10)*(i%10)*(i%10))
            printf("%d\n",i);
    }
    return 0;
}
