// bool isPowerOfFour(int n) {
//     if (n == 0) {
//         return false;
//     }
//     int x = (int)(log2(n) / log2(4) + 1e-8);
//     return fabs(n - pow(4, x) < 1e-8);
// }
#include<stdio.h>

int fit(int n) {
    int f[31];
    f[0] = 0, f[1] = 1;
    for (int i = 2; i <= n; ++i) {
        f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
}

int main() {
    int n, x = 0;
    scanf("%d", &n);
    x = fit(n);
    printf("%d", x);
    return 0;
}
#include<stdio.h>
int main()
{
	int a, b;
	while (scanf("%d %d", &a, &b) != EOF)
	{
		a = a + b;
		b = a - b;
		a = a - b;
		printf("%d %d", a, b);
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int a, b;
	while (scanf("%d %d", &a, &b) != EOF)
	{
		if (b % a == 0)
			printf("YES");
		else if (b == 0)
			printf("NO");
		else
			printf("NO");
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int s[4];
	int i, j;
	int temp = 0;
	for (i = 0; i < 4; i++)
		scanf("%d", &s[i]);
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < (3 - i); j++)
		{
			if (s[j] > s[j + 1])
			{
				temp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < 4; i++)
	{
		printf("%d ", s[i]);
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int i, j;
	int s[4];
	int temp = 0;
	for (i = 0; i < 4; i++)
		scanf("%d", &s[i]);
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < (3 - i); j++)
		{
			if (s[j] > s[j + 1])
			{
				temp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < 4; i++)
	{
		printf("%d ", s[i]);
	}
	return 0;
}
#include<stdio.h>
int main()
{
	char c;
	int alt = 0;
	int blo = 0;
	int num = 0;
	int oth = 0;
	while (c = getchar() != '\n')
	{
		if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
			alt++;
		else if (c > '0' && c < '9')
			num++;
		else if (blo == ' ')
			blo++;
		else
			oth++;
	}
	printf("%d %d %d %d", alt, blo, num, oth);
	return 0;
}
#include<stdio.h>
#include<math.h>

int main()
{
	int a = 0;
	int num = 0;
	int sum = 0;
	scanf("%d", &a);
	int temp = a;
	while (temp)
	{
		num = pow(temp % 10, 3);
		temp /= 10;
		sum += num;
	}
	return 0;
}