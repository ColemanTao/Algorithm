// #include<stdio.h>
// int main() {
//     int a  = 10;
//     int* pa = &a;
//     printf("%p ", &a);
//     char b = 'w';
//     char* pb = &b;
//     *pb;
//     printf("%p ", &b);
//     printf("%p ", pb);
//     return 0;
// }       
// #include<stdio.h>
// int main() {
//     int a = 10;
//     char ch = 'w';
//     int* pa = &a;
//     char* pc = ch;
//     printf("%d", sizeof(pa));
//     printf("%d", sizeof(pc))；
//     return 0;
// }
// struct Stu {
//     char name[20];
//     int age;
//     char sex[5];
//     char id[20];
// };
// int main() {
//     struct Stu s1 = {"","",""};
//     struct Stu s2 = {"","",""};
// }
// #include<stdio.h>
// typedef enum bool {
//     false,
//     true
// }bool;
// bool Su(int n) {
//     if (n <= 1)
//     return false;
//     for (int i = 2; i < sqrt(n); i++) {
//         if (n % i == 0) 
//         return false;
//     }
//     return true;
// }

// int main() {
//     int n;
//     scanf("%d", &n);
//     if (Su(n)) {
//         printf("%d", n);
//     }
//     else {
//         printf("No");
//     }
//     return 0;
// }
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int s; 
	scanf("%d", &s);
	int i = 0;
	int sum = 0;
	for (i = 1; i <= s; i++)
	{
		sum += i;
	}
	printf("%d", sum);
	return 0;
}
 #include<stdio.h>
int main()
{
	int n, ans;
	ans = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		ans += i;
	}
	printf("%d", ans);
	return 0;
}
#include<stdio.h>
int main()
{
	int n, ans;
	while (scanf("%d", &n) != EOF)
	{
		ans = 0;
		while (n)
		{
			ans += n;
			n--;
		}
		printf("%d", ans);
	}
	return 0;
}

循环枚举
#include<stdio.h>
int main()
{
	int n, ans;
	ans = 0;
	while (scanf("%d", &n) != EOF)
	{
		while (n)
		{
			ans += n;
			n--;
		}
		printf("%d", ans);
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int s; 
	int ans = 0;
	scanf("%d", &s);
	int i = 0;
	for (i = 1; i < s; i++)
	{
		ans += i;
	}
	printf("%d", ans);
	return 0;
}
奇偶判断
#include<stdio.h>
int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		if (n % 2 == 0)
			printf("%d", n / 2 * (n + 1));
		else
			printf("%d", (n + 1) / 2 * n);
	}
	return 0;
}
无符号整形
#include<stdio.h>
typedef unsigned int uit;

int main()
{
	uit n = 0;
	while (scanf("%d", &n) != EOF)
	{
		printf("%d", n * (n + 1) / 2);
	}
	return 0;
}
64位整数
#include<stdio.h>
int main()
{
	long long n = 0;
	while (scanf("%d", &n) != EOF)
	{
		printf("%d", (n + 1) * n / 2);
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int a, b, tmp;
	while (scanf("%d %d", &a, &b) != EOF)
	{
		tmp = a;
		a = b; 
		b = tmp;
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
#include<stdio.h>
#include<math.h>
int main()
{
	int a = 0;
	int sum = 0;
	int num = 0;
	scanf("%d", &a);
	int temp = a;
	while (temp)
	{
		num = pow(temp % 10, 3);
		sum += num;
		temp /= 10;
	}
	printf("%d", sum);
	return 0;
}

