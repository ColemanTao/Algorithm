#define  _CRT_SECURE_NO_WARNINGS 1	
//#include<stdio.h>
//int main()
//{
//	printf("**************************\n");
//	printf("Hello World!\n");
//	printf("**************************\n");
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	printf("  *\n * *\n*****");
//}
//#include<stdio.h>
//int main() {
//	char ch[];
//	scanf("%s", ch);
//	for (int i = 0; i < 5; i++) {
//		ch[i] += 4;
//	}
//	printf("%s", ch);
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	char s[6];
//	gets(s);
//	for (int i = 0; s[i] != '\0'; ++i) {
//		if (s[i] >= 'A' && s[i] <= 'Z')
//			s[i] = (s[i] + 4 - 'A') % 26 + 'A';
//		else if (s[i] >= 'a' && s[i] <= 'z')
//			s[i] = (s[i] + 4 - 'a') % 26 + 'a';
//	}
//	puts(s);
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	double f;
//	scanf("%lf", &f);
//	printf("c=%.2lf", 5 * (f - 32) / 9);
//	return 0;
//}
//#include<math.h>
//#include<stdio.h>
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int po = pow(a, 2) + pow(b, 2);
//	printf("%d", po);
//	return 0;
//}
//#include<stdio.h>
//#define i 3.1415
//int main() {
//	float r;
//	scanf("%f", &r);
//	printf("%.2lf", r * r * i);
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("C:%d\nS:%d", 2 * (a + b), a * b);
//	return 0;
//}
//#include<stdio.h>
//int Max(int a, int b, int c) {
//	return (a > b ? a : b) > c ? (a > b ? a : b) : c;
//}
//int main() {
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	int max = Max(a, b, c);
//	printf("%d", max);
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int x;
//	scanf("%d", &x);
//	if (x < 1)
//		printf("%d", x);
//	else if (x >= 10)
//		printf("%d", 3 * x - 11);
//	else
//		printf("%d", 2 * x - 1);
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	int max = (a > b ? a : b) > c ? (a > b ? a : b) : c;
//	int min = (a < b ? a : b) < c ? (a < b ? a : b) : c;
//	int mid = a + b + c - max - min;
//	printf("%d %d %d", min, mid, max);
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int a[5], cord = 0;
//	for (int i = 0; i < 5; ++i) {
//		scanf("%1d", &a[i]);
//		cord++;
//	}
//	printf("%d\n", cord);
//	for (int i = 0; i < 5; i++) {
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	for (int i = 4; i >= 0; i--) {
//		printf("%d", a[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main() {
//	char str[10];
//	scanf("%s", str);
//	int len = strlen(str);
//	printf("%d\n", len);
//	for (int i = 0; i < len; i++) {
//		printf("%c ", str[i]);
//	}
//	printf("\n");
//	for (int j = len - 1; j >= 0; --j) {
//		printf("%c", str[j]);
//	}
//	return 0;
//}
#include <stdio.h>

//int main() {
//    int i;
//    scanf("%d", &i);
//    if (i <= 100000) {//①    利润低于或等于100000元时
//        i = i * 0.1;
//    }
//    else if (100000 < i && i <= 200000) {//②    利润高于100000元，低于200000元时
//        i = (100000 * 0.1) + (i - 100000) * 0.075;
//    }
//    else if (200000 < i && i <= 400000) {//③    200000<i≤400000时
//        i = (100000 * 0.1) + 100000 * 0.075 + (i - 200000) * 0.05;
//    }
//    else if (400000 < i && i <= 600000) {//④    400000<i≤600000元时
//        i = (100000 * 0.1) + 100000 * 0.075 + 200000 * 0.05 + (i - 400000) * 0.03;
//    }
//    else if (600000 < i && i <= 1000000) {//⑤    600000<i≤1000000时
//        i = (100000 * 0.1) + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + (i - 600000) * 0.015;
//    }
//    else {//⑥    i>1000000时
//        i = (100000 * 0.1) + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + 400000 * 0.015 + (i - 1000000) * 0.01;
//    }
//    printf("%d\n", i);
//    return 0;
//}
//#include<stdio.h>
//int main() {
//	int arr[10];
//	int sum = 0;
//	int k = 0;
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &arr[i]);
//		sum += arr[i];
//	}
//	int aver = sum / 10;
//	for (int i = 0; i < 10; i++) {
//		if (aver < arr[i])
//			k++;
//	}
//	printf("%d", k);
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main() {
//	int a;
//	scanf("%d", &a);
//	int k = a;
//	int sum = 0;
//	int n;
//	while (k) {
//		n = k % 10;
//		sum += pow(n, 3);
//		k /= 10;
//	}
//	if (sum == a)
//		printf("1");
//	else
//		printf("0");
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main() {
//	int a, b, c;
//	int n;
//	scanf("%d", &n);
//	a = n % 10;
//	b = n / 10 % 10;
//	c = n / 100 % 10;
//	int temp = pow(a, 3) + pow(b, 3) + pow(c, 3);
//	if (temp == n)
//		printf("1");
//	else
//		printf("0");
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main() {
//	int n;
//	int sum = 0;
//	int temp;
//	for (int i = 371; i < 1000; i++) {
//		temp = i; 
//		while (temp) {
//			n = temp % 10;
//			sum += pow(n, 3);
//			temp /= 10;
//		}
//		if (sum == i)
//			printf("%d", sum);
//		sum = 0;
//	}
//	return 0;
//}
//#include<stdio.h>
//#include "math.h"
//
//int main()
//{
//    for (int i = 100; i < 1000; i++) {
//        if ((pow((i / 100), 3) + pow(((i % 100) / 10), 3) + pow((i % 10), 3)) == i) {
//            printf("%d\r\n", i);
//        }
//    }
//    return 0;
//}
//#include <stdlib.h>
//
//int main()
//
//{
//
//    int a, b, c, i;
//
//    for (i = 100; i <= 999; i++)
//
//    {
//        a = i / 100;                          //求百位数
//
//        b = (i - a * 100) / 10;              // 求十位数
//
//        c = i % 10;                         //求个位数
//
//
//
//        if (i == a * a * a + b * b * b + c * c * c)    //判断是否为水仙花数
//
//            printf("%d\n", i);
//
//
//
//
//
//    }
//
//    return 0;
//
//}
//#include<stdio.h>
//int main() {
//	double f;
//	scanf("%lf", &f);
//	printf("c=%.2lf", (f - 32) * 5 / 9);
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int n;
//	int arr[100];
//	int sum = 0;
//	scanf("%d", &n);
//	while (n--) {
//		scanf("%d", &arr[n]);
//		if (arr[n] % 2 == 0)
//			sum += arr[n];
//	}
//	printf("%d", sum);
//	return 0;
//}
#include<stdio.h>
int main() {
	int sum = 0;
	int n;
	scanf("%d", &n);
	for (int i = 2; i <= 2 * n + 1;i = i + 3) {
		sum += i;
		printf("%d", sum);
	}
	return 0;
}