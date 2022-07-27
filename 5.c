#define  _CRT_SECURE_NO_WARNINGS 1	
//#include<stdio.h>
//#include<iostream>
//#include<algorithm>
//using namespace std;
//struct node {
//	int b = 2, c = 1;
//};
//int cmp(node a, node b) {
//	return a.c > b.c;
//}
//int main() {
//	//int a[20]={1,2,3,6,5,4};
//	node a[50];
//	for (int i = 0; i < 3; i++) {
//		scanf("%d%d", &a[i].c, &a[i].b);
//		//printf("%d%d",);
//	}
//	sort(a, a + 3, cmp);
//	for (int i = 0; i < 3; i++) {
//		printf("%d%d\n", a[i].b, a[i].c);
//	}
//	return 0;
//#include<algorithm>
//#include<iostream>
//#include<stdio.h>
//#include<math.h>
////using namespace std;
//
//int main()
//{
//	double a = -1;
//	double b = fabs(a);
//	printf("%d", b);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[20];
//	scanf("%s", &a);
//	for (int i = 0; i < strlen(a); i++)
//	{
//		printf("%c", a[i] + 4);
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[20];
//	scanf("%s", &a);
//	for (int i = 0; i < strlen(a); i++)
//	{
//		a[i] += 4; 
//	}
//	printf("%s", a);
//	return 0;
//}
//#include<stdio.h>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	int d = max(a, max(b, c));
//	printf("%d", d);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i;
//	int sum = 0, ave = 0;
//	int a[20];
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		sum += a[i];
//	}
//	ave = sum / 10;
//	int j = 0;
//	a[i] = '\0';
//	int b = sizeof(a) / sizeof(int);
//	while (b--)
//	{
//		if (a[i] > ave)
//			j++;
//	}
//	printf("%d", j);
//	return 0;
//}
//#include<stdio.h>
//#define N 10 
//int main(void)
//{
//	int arr[N] = { 0,3,2,5,8,4,7,6,9,1 };
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	for (i = 0; i < N - 1; i++)
//	{
//		for (j = 0; j < N - 1 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (i = 0; i < N; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int x, y, sum = 0, N, a[10][10];
//    scanf("%d", &N);
//    for (x = 0; x < N; x++) {
//        for (y = 0; y < N; y++) {
//            scanf("%d", &a[x][y]);
//            if (x == y || x + y == N - 1) {
//                sum += a[x][y];
//            }
//        }
//    }
//    printf("%d", sum);
//    return 0;
//}
//
// 
//# include<stdio.h>
//# include<math.h>
//int main()
//{
//    double M;
//    scanf("%lf", &M);
//	double back, sum = M;
//	int i, N;
//	scanf("%d", &N);
//	back = M * pow(0.5, N);
//	for (i = 1; i < N; i++)
//		sum += M * pow(0.5, i - 1);
//	printf("%.2lf %.2lf", back, sum);
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//
//int main()
//
//{
//	int a, b, c;
//	float count = 0, i;
//	scanf("%d %d %d", &a, &b, &c);
//	for (i = 1; i <= a; i++)
//	{
//		count += i;
//	}
//	for (i = 1; i <= b; i++)
//	{
//		count += pow(i, 2);
//	}
//	for (i = 1; i <= c; i++)
//	{
//		count += 1 / i;
//	}
//	printf("%.2f", count);
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i;
//	int sum = 0;
//	for (i = 100; i < 1000; i++)
//	{
//		int sum = 0;
//		int t = i;
//		int temp = 0;
//		while (t)
//		{
//			 temp = t % 10;
//			sum += pow (temp, 3);
//			t /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", sum);
//		}
//	}
//	return 0;
//}
//sum = (i / 100) * (i / 100) * (i / 100) + (i % 100 / 10) * (i % 100 / 10) * (i % 100 / 10) + (i % 100 % 10) * (i % 100 % 10) * (i % 100 % 10);
//if (i == sum)
//{
//	printf("%d ", sum);
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i;
//	int sum = 0;
//	int a1, a2;
//	for (i = 1; i <= n; i++)
//	{
//
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	double n = 2, m = 1, N, t, sum = 0;
//	scanf("%lf", &N);
//	while (N)
//	{
//		sum +=  n / m;
//		t = m;
//		m = n;
//		n = n + t;
//		N--;
//	}
//	printf("%.2lf", sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	double n = 2, m = 1;
//	double N, t, sum = 0;
//	scanf("%lf", &N);
//	while (N)
//	{
//		sum += n / m;
//		t = m;
//		m = n;
//		n = t + n;
//		N--;
//	}
//	printf("%.2lf", sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a[3][3];
//	int i, j;
//	int sum1 = 0;
//	int sum2 = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			if (i == j)
//				sum1 += a[i][j];
//			if (i + j == 2)
//				sum2 += a[i][j];
//		}
//	}
//	printf("%d %d", sum1, sum2);
//	return 0;
//}