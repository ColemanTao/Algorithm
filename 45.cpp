#define  _CRT_SECURE_NO_WARNINGS 1	
//#include<stdio.h>
//int main()
//{
//	unsigned int a, b;
//	scanf("%d %d", &a, &b);
//	double c = (b * 1.0 / a) * 100;
//	printf("%.3lf%%", c);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a[4];
//	int i, temp;
//	for (i = 0; i < 4; i++)
//	{
//		scanf("%1d", &a[i]);
//	}
//	for (i = 0; i < 2; i++)
//	{
//		temp = a[i];
//		a[i] = a[3 - i];
//		a[3 - i] = temp;
//	}
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d", a[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	unsigned int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	int sum = 0.2 * a + 0.3 * b + 0.5 * c;
//	printf("%d", sum);
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	unsigned int a, b, c, d;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	printf("%d", abs(abs(a - b) - abs(c - d)));
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int a[4];
//    int i, ans, j;
//    for (i = 0; i < 4; i++)
//        scanf("%d", &a[i]);
//    int temp;
//    for (i = 1; i <= 4; i++)
//    {
//        for (j = 0; j <= 3 - i; j++)
//        {
//            if (a[j] > a[j + 1])
//            {
//                temp = a[j];
//                a[j] = a[j + 1];
//                a[j + 1] = temp;
//            }
//        }
//    }
//    int n = a[0] + a[3];
//    int m = a[1] + a[2];
//    ans = abs(m - n);
//    printf("%d", ans);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n, p;
//	int sum = 0, k= 1;
//	while (~scanf("%d", &n))
//	{
//		if (sum == n)
//			break;
//		sum += pow(2, k);
//		k++;
//	}
//	printf("%d", pow(2, k) + k);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//    long long n;
//    scanf("%lld", &n);
//    printf("%lld", n + 1);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    long long int n, m;
//    scanf("%lld %lld", &n, &m);
//    printf("%lld", n * m - n - m);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	if (a < b)
//		printf("<");
//	else if (a > b)
//		printf(">");
//	else
//		printf("=");
//	return 0;
//}
//#include<stdio.h>
//int main()
//	{
//		long long X, Y;
//		scanf("%lld %lld", &X, &Y);
//		if (Y % X == 0)
//			printf("%lld", X + Y);
//		else
//			printf("%lld", Y - X);
//		return 0;
//	}
//#include<stdio.h>
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a % 2 == 0 && a > 50)
//		printf("yes");
//	else
//		printf("no");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
//		printf("yes");
//	else
//		printf("no");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d\n%d\n%d", &a, &b, &c);
//	switch (1)
//	{
//	case 1:a + b * c;
//	case 2:a * (b + c);
//	case 3: 
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a[10];
//	int i;
//	int positive = 0, negative = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		if (a[i] > 0)
//		{
//			positive++;
//		}
//		else
//			negative++;
//	}
//	printf("positive:%d\nnegative:%d", positive, negative);
//	return 0;
//}
//#include<stdio.h>
//#include <algorithm>
//using namespace std;
//int main()
//{
//    int a, b, c;
//    scanf("%d\n%d\n%d", &a, &b, &c);
//    int ans[6];
//    ans[0] = (a + b) + c;
//    ans[1] = (a + b) * c;
//    ans[2] = (a * b) + c;
//    ans[3] = (a * b) * c;
//    ans[4] = a + (b * c);
//    ans[5] = a * (b + c);
//    sort(ans, ans + 6);
//    printf("%d", ans[5]);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d\n%d\n%d", &a, &b, &c);
//	int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0, sum6 = 0;
//	switch (1)
//	{
//	case 1:sum1 = a + b * c;
//	case 2:sum2 = a * (b + c);
//	case 3:sum3 = a * b * c;
//	case 4:sum4 = (a + b) * c;
//	case 5:sum5 = a + b + c;
//	case 6:sum6 = a * c + b;
//	}
//	int max = sum1;
//	if (max < sum2)
//		max = sum2;
//	if (max < sum3)
//		max = sum3;
//	if (max < sum4)
//		max = sum4;
//	if (max < sum5)
//		max = sum5;
//	if (max < sum6)
//		max = sum6;
//	printf("%d", max);
//	return 0;
//}