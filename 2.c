#include<stdio.h>
int main()
{
    int i, j;
    int plu = 0;
    for (i = 1; i < 10; i++)
    {
        for (j = 1; j <= i; j++)
        {
            plu = i * j;
            if (plu < 10)
            {
                printf("%d*%d= %d ", j, i, plu);
                continue;
            }
                printf("%d*%d=%d ", j, i, plu);
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>

void func(int i, int j)
{
if(i>j)
    return;
printf("%dx%d=%2d\t", i, j, i*j);
func(i+1, j);
}

void f(int n)
{
if(n==1)
    printf("1x1= 1\n");
else
{
    f(n-1);
    func(1, n);
    putchar('\n');
}
}


int main()
{
f(9);
return 0;
}
#include<stdio.h>
int main()
{
    printf("printf(\"Hello world!\\n\");\ncout << \"Hello world!\" << endl;");
}
#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%.3lf%%",( b * 1.0 / a) * 100);
}
#include<stdio.h>
int main()
{
	double avg;
	int i, a, n;
	while (scanf("%d", &n) != EOF)
	{
		avg = 0;
		for (i = 0; i < n; i++)
		{
			scanf("%d", &a);
			avg += a;
		}
		avg /= n;
		printf("%.2lf", avg);
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int n, i, a;
	double avg;
	while (scanf("%d", &n) != EOF)
	{
		avg = 0;
		for (i = 0; i < n; i++)
		{
			scanf("%d", &a);
			avg += a;
		}
		avg /= n;
		printf("%.2lf", avg);
	}
	return 0;
}
#include<stdio.h>
int f(int n) {
	if (n <= 1) {
		return 1;
	}
	else {
		return n * f(n - 1);
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", f(n));
	return 0;
}
#include<stdio.h>
int main()
{
	int temp, n;
	while (scanf("%d", &n) != EOF)
	{
		for (int i = 0; i < n; i++)
		{

		}
	}
	return 0;
}
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
        if (su(n - 6))
            printf("%d", n - 6);
        else
            printf("%d", n + 6);
    }
    else
    {
        printf("No\n");
        for (int i = n + 1; ; i++)
        {
            if (su(i) && (su(i + 6) || su(i - 6)))
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
    int i;
    char ch[5];
    for (i = 0; i < 5; i++)
    {
        scanf_s("%c", &ch[i]);
        ch[i] += 4;
    }
    for (i = 0; i < 5; i++)
    {
        printf("%c", ch[i]);
    }
    return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
    int a, b;
    scanf_s("%d %d", &a, &b);
    printf("%ld", pow(a, 2) + pow(b, 2));
    return 0;
}
#include<stdio.h>
#include<math.h>
int su(int n)//判断素数
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
			if (su(n - 6))
			{
				printf("%d", n - 6);
			}
			else
			{
				printf("%d", n + 6);
			}
	}
	else
	{
		printf("No\n");
		for (int i = n + 1; ; i++)
		{
			if (su(i) && (su(i + 6) || su(i - 6)))
			{
				printf("%d", i);
				break;
			}
		}
	}
	return 0;
}
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
		if (su(n - 6))
		{
			printf("%d", n - 6);
		}
		else
			printf("%d", n + 6);
	}
	else
	{
		for (int i = n + 1; ; i++)
		{
			if (su(i) && (su(i + 6) || su(i - 6)))
			{
				printf("%d", i);
				break;
			}
		}
	}
	return 0;
}
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
	if (su(n) && (su(n - 6) || su(n + 6)))
	{
		printf("Yes\n");
		if (su(n - 6))
		{
			printf("%d", n - 6);
		}
		else
		{
			printf("%d", n + 6);
		}
	}
	else
		printf("No\n");
		for (int i = n + 1; ; i++)
		{
			if (su(i) && (su(i - 6) || su(i + 6)))
			{
				printf("%d", i);
				break;
			}
		}
	return 0;
}
#include<iostream>
#include<unordered_set>
using namespace std;
int n, m;
unordered_set<string> a, b, t;//a:所有校友 b:参加校庆的所有人士 t:要从里面找答案的集合（为了节省代码长）
string id;
int main()
{
	ios::sync_with_stdio(0);//提高输入输出速度
	cin.tie(0);//一样

	cin >> n;
	while (n--)//所有校友的身份证
	{
		cin >> id;
		a.insert(id);
	}
	cin >> m;
	while (m--)//所有参加校庆的所有人士的身份证
	{
		cin >> id;
		b.insert(id);
	}
	int cnt = 0;//cnt来了多少校友
	for (auto e : b)//遍历b
		cnt += a.count(e);

	cout << cnt << '\n';//输出
	if (!cnt) t = b; // 如果没有校友来，就在参加校庆的所有人士里面找答案
	else t = a; // 否则在校友里面找
	string maxbirth = "99999999", maxid; // maxbirth: 最年长的人的生日, maxid: 最年长的人的身份证号
	for (auto e : t) // 遍历t
	{
		if (!b.count(e)) continue; // 如果没有参加校庆就跳过
		string birth = e.substr(6, 8); // 提取生日
		if (birth < maxbirth) maxbirth = birth, maxid = e; // 更新答案
	}
	cout << maxid; // 输出

	return 0;
}
#include<stdio.h>
int su(int n)
{
	if (n <= 1)
		return 0;
	for (int i = 1; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
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
		if (su(n - 6))
		{
			printf("%d", n - 6);
		}
		else
		{
			printf("%d", n + 6);
		}
	}
	else
	{
		printf("No\n");
		for (int i = 0; ; i++)
		{
			if (su(i) && (su(i + 6) || su(i - 6)))
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
   int a[1000000];
   int sum = 0;
   for (int i = 0; i < n; i++)
   {
       sum += a[i];
   }
   int s = sum;
   while (s)
   {
       switch (s % 10)
       {
       case 1:printf("yi "); break;
       case 2:printf("er "); break;
       case 3:printf("san "); break;
       case 4:printf("si "); break;
       case 5:printf("wu "); break;
       case 6:printf("liu "); break;
       case 7:printf("qi "); break;
       case 8:printf("ba "); break;
       case 9:printf("jiu "); break;
       default:printf("ling ");
       }
       s = sum / 10;
   }
   return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100], b[100];
	int n;
	scanf("%d", &n);
	int m = n;
	while (n--)
	{
		gets(a);
	}
	//for (int i = 6, sum = 0; i < 14; i++, sum++)
	//{
	//	b[sum] = a[i] - '0';
	//}
	for (int i = 0; i < m; i++)
	{
		printf("%s\n", &a[i]);
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int a = 4, b = 5;
	printf("%d", ++a);
	printf("%d", a++);
	printf("%d %d %d %d", ++a, a++, --b, b--);
	return 0;
}
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	if (su(n) && (su(n - 6) || su(n + 6)))
	{
		printf("Yes\n");
		if (su(n - 6))
		{
			printf("%d", n - 6);
		}
		else
		{
			printf("%d", n + 6);
		}
	else 
	{ 
		for (int i = 0; ; i++)
		{
			if ()
		}
	}
	return 0;
}