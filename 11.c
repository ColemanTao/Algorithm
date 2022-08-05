// #include<stdio.h>
// int main()
// {
//     int a, b;
//     while (scanf("%d %d", &a, &b) != EOF)
//     {
//         a + b;
//         printf("%d", a + b);
//     }
//     return 0;
// }
int CountEven(int n, int a[]) {
    int cnt;
    for (int i = 0; i < n; ++i) {
        if (a[i] == 0)
        ++cnt;
    }
    return cnt;
}
int CountEven1(int n, int a[]) {
    int nct;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if ((a[i] + a[j]) % 2 == 0)
            ++nct;
        }
    }
    return nct;
}
int CountEven2(int n, int a[]) {
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            for (int k = j + 1; j < n; ++k) {
                if ((a[i] + a[j] + a[k]) % 2 == 0) {
                    ++cnt;
                }
            }
        }
    }
    return cnt;
}
int dfs(int n, int a[], int start, int k, int sum) {
        if (k == 0) {
            return sum % 2 ? 0 : 1;
        }
        int s = 0;
        for (int i = start; i < n; ++i) 
            s += dfs(n, a, i + 1, k - 1, sum + a[i]);
        return s;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    float i = 0;
    scanf("%f", &i);
    printf("%.3f", i);
    return 0;
}
#include<stdio.h>
int main()
{
    char i = 0;
    scanf("%c", &i);
    printf("%c", i);
    return 0;
}
#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", b);
    return 0;
}
#include <stdio.h>
int main()
{
    char n;
    scanf("%c", &n);
    printf("%c%c%c\n%c%c%c\n%c%c%c", n, n, n, n, n, n, n, n, n);
    return 0;
}
#include<stdio.h>
int main()
{
	char i = 0;
	int n, m;
	scanf("%c", &i);
	for (n = 0; n < 3; n++)
	{
		for (m = 0; m < 3; m++)
		{
			printf("%c", i);
		}
		printf("\n");
	}
	return 0;
}
#include<stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 2 - i; j > 0; j--)
        {
            printf(" ");
        }
        for (j = 0; j < 2 * i + 1; j++)
        {
            printf("%c", a);
        }
        printf("\n");
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf(" ");
        }
        for (j = 0; j < 2 * (2 - i) - 1; j++)
        {
            printf("%c", a);
        }
        printf("\n");
    }
}
#include<stdio.h>
int main()
{
	char a = 0;
	scanf("%c", &a);
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 2 - i; j > 0; j == )
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("%c", &a);
		}
		printf("\n");
	}
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (2 - i) - 1; j++)
		{
			printf("%c", a);
		}
		printf("\n");
	}
	return 0;
}
#include<stdio.h>
int main()
{
	char a;
	int i, j;
	scanf("%c", &a);
	for (i = 1; i <= 3; i++)
	return 0;
}