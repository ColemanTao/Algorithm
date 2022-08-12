#include<stdio.h>
int main() {
    int ch;
    while ((ch = getchar()) != EOF) {
        putchar(ch);
    }
    return 0;
}
#define  _CRT_SECURE_NO_WARNINGS 1	
int main()
{

    int n;
    int a[100];
    int sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            sum += a[i];
        }
    }
    printf("%d", sum);
    return 0;
}
#include<stdio.h>
int main()
{
	int a[10];
	int i, j;
	for (i = 0; i < 9; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 9; i++)\
	{
		
		for (j = i + 1; j < 9; j++)
		{

		}
	}
	return 0;
}
#include <stdio.h>

int main()
{
    int a[10];
    int i = 0;
    int t;
    for (i = 0; i < 9; i++)
    {
        scanf("%d", &a[i]);
    }
    a[9] = 0;
    int x;
    scanf("%d", &x);
    for (i = 0; i < 10; i++)
    {
        if (x >= a[i] && x <= a[i + 1])
        {
            t = i + 1;
            break;
        }
    }
    //  printf("%d\n",t);
    for (i = 9; i > t; i--)
    {
        a[i] = a[i - 1];
    }
    a[t] = x;

    for (i = 0; i < 10; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}
#include<stdio.h>
int main()
{
	int a[10];
	int i, t;
	for (i = 0; i < 9; i++)
	{
		scanf("%d", &a[i]);
	}
	a[9] = 0;
	int x;
	scanf("%d", &x);
	for (i = 0; i < 9; i++)
	{
		if (x >= a[i] && x <= a[i + 1])
		{
			t = i + 1;
			break;
		}
	}
	for (i = 9; i > t; i--)
	{
		a[i] = a[i - 1];
	}
	a[t] = x;
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int a[11];
	int i, j, temp;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (a[i] > a[j])
			{
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int a[10];
	int b[10];
	int i;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 10; i++)
	{
		b[i] = a[9 - i];
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", b[i]);
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int a[3][3];
	int i, j;
	int sum1 = 0, sum2 = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < 3; i++)
	{
		if ()
	}
	printf("%d %d", sum1, sum2);
	return 0;
}
#include<stdio.h>
int main()
{
	int x, y, sum1 = 0, sum2 = 0, a[3][3];
	for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 3; y++)
		{
			scanf("%d", &a[x][y]);
			if (x == y)
				sum1 += a[x][y];
			if (x + y == 2)
				sum2 += a[x][y];
		}
	}
	printf("%d %d", sum1, sum2);
	return 0;
}
#include<stdio.h>
#define N 3
int main()
{
	int n;
	scanf("%d", &n);
	int a[N][N];
	int x, y, i, j;
	int sum1 = 0, sum2 = 0, sum;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &a[i]);
			if (i == j)
			{
				sum1 += a[i][j];
			}
			else if (i + j == 2)
			{
				sum2 += a[i][j];
			}
		}
	}
	sum = sum1 + sum2;
	printf("%d ", sum);
	return 0;
}
#include<stdio.h>
int main()
{
    int x, y, sum = 0, N, a[10][10];
    scanf("%d", &N);
    for (x = 0; x < N; x++) {
        for (y = 0; y < N; y++) {
            scanf("%d", &a[x][y]);
            if (x == y || x + y == N - 1) {
                sum += a[x][y];
            }
        }
    }
    printf("%d", sum);
    return 0;
}
#include<stdio.h>
int main()
{
	int i, j, sum = 0, N, a[10][10];
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			scanf("%d", &a[i][j]);
			if (i == j || i + j == N - 1)
			{
				sum += a[i][j];
			}
		}
	}
	printf("%d\n", sum);
	return 0;
}
# include<stdio.h>
int fun(int n)
{
    if (n <= 3) return n;
    else return fun(n - 1) + fun(n - 3);
}
int main()
{
    int n;
    while (scanf("%d", &n) && n)
        printf("%d\n", fun(n));
    return 0;
}
#include<stdio.h>
int fun(int n)
{
	if (n <= 3)
		return n;
	else return fun(n - 1) + fun(n - 3);
}
int main()
{
	int n;
	while (scanf("%d", &n) && n)
	{
		printf("%d\n", fun(n));
	}
	return 0;
}
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
	int a = 2, b = 1, c = 5;
	int d = max(a, max(b, c));
	printf("%d", d);
	return 0;
}