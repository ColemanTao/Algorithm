#define  _CRT_SECURE_NO_WARNINGS 1	
//#include<stdio.h>
//int main() {
//	int m, n;
//	scanf("%d %d", &n, &m);
//	int gcd = 1;
//	for (int i = 2; i <= n && i <= m; i++) {
//		while (m % i == 0 && n % i == 0) {
//			m /= i;
//			n /= i;
//			gcd *= i;
//		}
//	}
//	printf("%d %d", gcd, m * n * gcd);
//	return 0;
//}
//#include <stdio.h>
//
//int gcd(int a, int b) {
//    return (a % b == 0) ? b : gcd(b, a % b);
//}
//
//int main() {
//    int m, n;
//    scanf("%d %d", &m, &n);
//    int ans = gcd(m, n);
//    printf("%d %d\n", ans, m * n * ans);
//    return 0;
//}
//#include<stdio.h>
//int main() {
//	int n, m;
//	int gcd = 1;
//	scanf("%d %d", &n, &m);
//	for (int i = 2; i <= n && i <= m; i++) {
//		while (n % i == 0 && m % i == 0) {
//			n /= i;
//			m /= i;
//			gcd *= i;
//		}
//	}
//	printf("%d %d", gcd, gcd * m * n);
//	return 0;
//}
//#include<stdio.h>
//int gcd(int a, int b) {
//	return a % b == 0 ? b : gcd(b, a % b);
//}
//int main() {
//	int m, n;
//	scanf("%d %d", &n, &m);
//	int ans = gcd(n, m);
//	printf("%d %d", ans, n * m / ans);
//	return 0;
//}
//#include<stdio.h>
//int gcd(int a, int b) {
//	return a % b == 0 ? b : gcd(b, a % b);
//}
//int main() {
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int ans = gcd(n, m);
//	printf("%d %d", ans, ans * n * m);
//	return 0;
//}
//#include"stdio.h"
//int gcd(int a, int b);//��������
//int lcm(int a, int b);//��������
//int main()
//{
//    int a, b;
//    scanf("%d %d", &a, &b);
//    printf("%d %d", gcd(a, b), lcm(a, b));
//    return 0;
//}
//int gcd(int a, int b)
//{
//    if (b == 0)
//        return a;
//    return gcd(b, a % b);//�ݹ����
//}
//int lcm(int a, int b)
//{
//    return a / gcd(a, b) * b;//���ù�ʽ
//}
//#include<stdio.h>
//int main() {
//	int t = 0;
//	double a = 1, b = 2;
//	double sum = 0;
//	int temp;
//	scanf("%d", &t);
//	while (t--) {
//		sum += b / a;
//		temp = a;
//		a = b;
//		b = temp + b;
//	}
//	printf("%.2lf", sum);
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	double Sn = 0, an = 0, n, i, t, a = 2.0, b = 1.0;//aΪ���ӣ�bΪ��ĸ��anΪ�����ֵ��SnΪ�ܺ�
//	scanf("%lf", &n);
//	Sn += a / b;//��һ��ڹ����У���ѭ��ǰ�ȼ���
//	for (i = 1; i < n; i++) {
//		t = a;
//		a = a + b;//��ǰһ��ķ��Ӽӷ�ĸ����һ��ķ���
//		b = t;//��ǰһ��ķ��Ӹ���һ��ķ�ĸ
//		an = a / b;
//		Sn += an;
//	}
//	printf("%0.2lf", Sn);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    double m, h, ans;
//    int n;
//    scanf("%lf%d", &m, &n);
//    h = m / (1 << n);
//    ans = m + (m - h * 2) * 2;
//    printf("%.2lf %.2lf", h, ans);
//    return 0;
//}
//#include<stdio.h>
//int main() {
//	int sum = 1, N;
//	scanf("%d", &N);
//	while (--N) {
//		sum = (sum + 1) * 2;
//	}
//	printf("%d", sum);
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int n, temp;
//	scanf("%d", &n);
//	for (int i = 0; i < 3; i++) {
//		temp = n % 10;
//		printf("%d ", temp);
//		n /= 10;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    for (int i = 1; i <= 9; i++)
//    {
//        for (int j = 1; j <= i; j++)
//            printf("%d*%d=%-3d", j, i, i * j);
//        puts("");
//
//    }
//    return 0;
//}
//#include<stdio.h>
//int main() {
//	for (int i = 1; i <= 9; i++) {
//		for (int j = 1; j <= i; j++) {
//			printf("%d*%d=%-2d ", j, i, i * j);
//		}
//		printf("\n");
//
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	for (int i = 10; i <= 1000; i++) {
//		if (i % 42 == 0) {
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int a[20], t = 0;
//	double sum = 0;
//	for (int i = 0; i < 20; i++) {
//		scanf("%d", &a[i]);
//		if (a[i] >= 0)
//			sum += a[i];
//		else
//			t++;
//	}
//	printf("%d\n%.2lf", t, sum / (20 - t));
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int a[10];
//	int n, temp;
//	for (int i = 0; i < 9; i++) {
//		scanf("%d", &a[i]);
//	}
//	scanf("%d", &n);
//	a[9] = n;
//	for (int i = 0; i < 9; i++) {
//		if (a[i] > a[9]) {
//			temp = a[9];
//			a[9] = a[i];
//			a[i] = temp;
//		}
//	}
//	for (int i = 0; i < 10; i++) {
//		printf("%d\n", a[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int a[10];
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &a[i]);
//	}
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", a[9 - i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int i, j;
//	int a[3][3];
//	int sum1 = 0, sum2 = 0;
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			scanf("%d", &a[i][j]);
//		}
//	}
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			if (i == j) {
//				sum1 += a[i][j];
//			}
//			if (i + j == 2)
//				sum2 += a[i][j];
//		}
//	}
//	printf("%d %d", sum1, sum2);
//	return 0;
//}
//#include<stdio.h>
//int gcd(int a, int b) {
//	if (b== 0)
//		return a;
//	else
//		return gcd(b, a % b);
//}
//int lam(int a, int b) {
//		return a * b / gcd(a, b);
//}
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d %d", gcd(a, b), lam(a, b));
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>  
///* #include<math.h> ӦΪҪʵ��ָ���Ϳ������Էֱ�Ҫʹ
//   ��pow������sqrt����    pow(����,ָ��)          sqrt(����)
//*/
//int main()
//{
//    double a, b, c, deta;     //ӦΪ��С����Ϊ�˷���ȫ������Ϊ˫���� 
//    double x1, x2;
//    scanf("%lf %lf %lf", &a, &b, &c);
//    deta = pow(b, 2) - 4 * a * c;      //�����ж�ʽ��ֵ 
//    if (deta > 0)         //deta����0 
//    {
//        x1 = (-b + sqrt(deta)) / 2 * a;
//        x2 = (-b - sqrt(deta)) / 2 * a;
//        printf("x1=%.3lf x2=%.3lf\n", x1, x2);
//    }
//    else if (deta == 0)          //deta����0 
//    {
//        x1 = (-b) / (2 * a);
//        x2 = (-b) / (2 * a);
//        printf("x1=%.3lf x2=%.3lf\n", x1, x2);
//    }
//    else      //detaС��0 
//    {
//        double m, n;    //��Ϊ�ǹ������������������ 
//        m = (-b) / (2 * a);
//        n = sqrt(-deta) / (2 * a);
//        printf("x1=%.3lf+%.3lfi x2=%.3lf-%.3lfi\n", m, n, m, n);
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int Su(int n) {
//	if (n <= 1)
//		return 0;
//	for (int i = 2; i <= (int)sqrt(n); i++) {
//		if (n % i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main() {
//	int n;
//	scanf("%d", &n);
//	if (Su(n) == 1) {
//		printf("prime");
//	}
//	else
//		printf("not prime");
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int i, j;
//	int a[3][3];
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 3; j++) {
//			scanf("%d", &a[i][j]);
//		}
//	}
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 3; j++) {
//			printf("%d ", a[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
#include<stdio.h>
//#include<string.h>
//void Yu(char a[], char b[]) {
//	int i, j = 0, k, l;
//	char x;
//	l = strlen(a);
//	for (i = 0; i < l; i++) {
//		if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u') {
//			b[j] = a[i];
//			j++;
//		}
//	}
//	b[j] = '\0';
//	k = strlen(b);
//	for (i = 0; i < k; i++) {
//		for (k = i; j < k; j++) {
//			if (b[i] > b[j]) {
//				x = b[j]; 
//				b[j] = b[i]; 
//				b[i] = x;
//			}
//		}
//	}
//}
//int main() {
//	char a[100], b[100];
//	gets(a);
//	Yu(a, b);
//	puts(b);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//void Yu(char a[], char b[]) {
//	int i, j = 0, k, x;
//	int l = strlen(a);
//	for (i = 0; i < l; i++) {
//		if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u') {
//			b[j] = a[i];
//			j++;
//		}
//	}
//	b[j] = '\0';
//	k = strlen(b);
//	for (i = 0; i < k; i++) {
//		for (j = i; j < k; j++) {
//			if (b[i] > b[j]) {
//				x = b[j];
//				b[j] = b[i];
//				b[i] = x;
//			}
//		}
//	}
//}
//int main() {
//	char a[100], b[100];
//	int i, j;
//	gets(a);
//	Yu(a, b);
//	puts(b);
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int a, b;
//	while (scanf("%d %d", &a, &b) != EOF) {
//		printf("%d\n", a + b);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//    int max = (a > b ? a : b) < c ? c : (a > b ? a : b);
//    printf("%d", max);
//    return 0;
//}
//#include<stdio.h>
//int main() {
//	int a[4];
//	for (int i = 0; i < 4; i++) {
//		scanf("%1d", &a[i]);
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	char c[100];
//	int alh = 0, num = 0, blo = 0, oth = 0;
//	while (getchar(c) != '\0') {
//		char a = getchar(c);
//		if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
//			alh++;
//		else if (a >= '0' && a <= 9)
//			num++;
//		else if (a == ' ')
//			blo++;
//		else
//			oth++;
//	}
//	printf("%d %d %d %d", alh, num, blo, oth);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//void calcul(char str[100], int res[4])
//{
//    int i;
//    int len = strlen(str);
//    for (i = 0; i < len; i++)
//    {
//        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
//        {
//            res[0]++;
//        }
//        else if (str[i] >= '0' && str[i] <= '9')
//        {
//            res[1]++;
//        }
//        else if (str[i] == ' ')
//        {
//            res[2]++;
//        }
//        else
//        {
//            res[3]++;
//        }
//    }
//}
//int main()
//{
//    char str[100];
//    int res[4] = { 0 };
//    gets(str);
//    calcul(str, res);
//    int i;
//    for (i = 0; i < 4; i++)
//    {
//        printf("%d ", res[i]);
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int Fen(char ch[],int res[]) {
//	int len = strlen(ch);
//	for (int i = 0; i < len; i++) {
//		        if ((ch[i] >= 'A' && ch[i] <= 'Z') || (ch[i] >= 'a' && ch[i] <= 'z'))
//        {
//            res[0]++;
//        }
//        else if (ch[i] >= '0' && ch[i] <= '9')
//        {
//            res[1]++;
//        }
//        else if (ch[i] == ' ')
//        {
//            res[2]++;
//        }
//        else
//        {
//            res[3]++;
//        }
//	}
//}
//int main() {
//	char ch[100];
//	int res[4] = { 0 };
//	gets(ch);
//	Fen(ch, res);
//	for (int i = 0; i < 4; i++)
//		printf("%d ", res[i]);
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int ch[10];
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &ch[i]);
//	}
//	int temp;
//	for (int i = 0; i < 9; i++) {
//		for (int j = 0; j < 10 - i; i++) {
//			if (ch[j + 1] < ch[j]) {
//				temp = ch[j + 1];
//				ch[j + 1] = ch[j];
//				ch[j] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", ch[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//
//void deal(int a[]);
//
//
//int main()
//{
//    int x[10];
//    for (int i = 0; i < 10; i++)
//        scanf("%d", &x[i]);
//
//    deal(x);
//
//    return(0);
//}
//
//
//void deal(int a[])
//{
//    int max = 0, x, team, l, min = a[0];
//
//    for (int i = 0; i < 10; i++)    //����С��������
//    {
//        if (a[i] < min)
//        {
//            min = a[i]; l = i;
//        }
//    }
//    team = a[0];
//    a[0] = min;
//    a[l] = team;
//    for (int k = 0; k < 10; k++)     //�������������
//    {
//        if (a[k] > max)
//        {
//            max = a[k]; x = k;
//        }
//    }
//    team = a[9];
//    a[9] = max;
//    a[x] = team;
//
//    for (int j = 0; j < 10; j++)  //���
//        printf("%d ", a[j]);
//}
//#include<stdio.h>
//void fun(int arr[], int n, int m)
//{
//    int i;
//    //forѭ������Ҫ�ƶ��ĺ�m��������������ĺ��
//    for (i = n - 1; i > n - 1 - m; i--)
//    {
//        arr[i + m] = arr[i];
//    }
//    //��������ÿ��Ԫ�������ƶ�m��λ��
//    for (i = n - 1; i >= 0; i--)
//    {
//        arr[i] = arr[i - m];
//    }
//    //����Ҫ�ƶ��ĺ�m��Ԫ���ƶ���ǰm��Ԫ����
//    for (i = 0; i < m; i++)
//    {
//        arr[i] = arr[n + i];
//    }
//}
//int main()
//{
//    //����n����������Ҫ����n������
//    int n;
//    //����m����������Ҫ�ƶ���λ��
//    int m;
//    //��������arr����������Ҫ�����n������
//    int arr[100];
//    scanf("%d", &n);
//    int i = 0;
//    for (; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &m);
//    //���ú���fun����������n����
//    fun(arr, n, m);
//    for (i= 0; i < n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//#include<stdio.h> 
//int fun(int n) {
//	if (n <= 3)
//		return n;
//	else
//		return fun(n - 1) + fun(n - 3);
//}
//int main() {
//	int n;
//	while (scanf("%d", &n) && n) {
//		printf("%d\n", fun(n));
//	}
//	return 0;
//}
//#include<stdio.h>
//int fun(int n) {
//	if (n <= 3)
//		return n;
//	else
//		return fun(n - 1) + fun(n - 3);
//}
//int main() {
//	int n;
//	while (scanf("%d", &n) && n) {
//		printf("%d\n", fun(n));
//	}
//}
//#include<stdio.h>
//int main() {
//	int n;
//	scanf("%d", &n);
//	int sum = 0;
//	int temp = 0;
//	for (int i = 1; i <= n; i++) {
//		temp = temp * 10 + 2;
//		sum += temp;
//	}
//	printf("%d", sum);
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int n;
//	scanf("%d", &n);
//	int  sum = 0;
//	for (int i = 1; i <= n; i++) {
//		int plu = 1;
//		for (int j = i; j > 0; j--) {
//			plu *= j;
//		}
//		sum += plu;
//	}
//	printf("%d", sum);
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int n;
//	scanf("%d", &n);
//	int plu = 1, sum = 0;
//	for (int i = 1; i <= n; i++) {
//		plu *= i;
//		sum += plu;
//	}
//	printf("%d", sum);
//	return 0;
//}
//#include<stdio.h>
//int fun(n) {
//	if (n <= 3)
//		return n;
//	else
//		return fun(n - 1) + fun(n - 3);
//}
//int main() {
//	int n;
//	while (scanf("%d", &n) && n)
//	printf("%d\n", fun(n));
//	return 0;
//}
//#include<stdio.h>
//int main() {
//    int n;
//    scanf("%d", &n);
//    int plu = 1, sum = 0;
//    for (int i = 1; i <= n; i++) {
//        plu *= i;
//        sum += plu;
//    }
//    printf("%d", sum);
//    return 0;
//}
//#include<stdio.h>
//#define SIZE 100 // 100 ���ռ��㹻���һ��������������������
//enum bool{ fales, ture};//����bool�����ò��ˣ���Ҳ��֪��Ϊʲô -_-||| ���������ö�ٳ����ɣ� Ҳ���Է��� 1 �� 0 ����
//// ��һ�����ж��ǲ���������
//int isFactors(int factors);
////�ڶ������ҳ�����������������
//void findFactors(int factors);
////����������������������������������
//void printFactors(int* factors, int thisfactors);
//int main() {
//    int factors;
//    scanf("%d", &factors);
//    int i;
//    for (i = 6; i <= factors; i++) { //������С���������� 6 ������ֱ�Ӵ� 6 ��ʼ�Ұ� -_-|||
//        if (isFactors(i)) {
//            findFactors(i);
//        }
//    }
//    return 0;
//}
////��һ�����ж��ǲ���������
//int isFactors(int factors) {
//    int sum = 1; // ������������������ 1 �������Ȱ����ۼ�
//    int i;
//    for (i = 2; i < factors; i++) {
//        if (factors % i == 0)
//            sum += i;
//    }
//    if (sum == factors)
//        return ture;
//    else
//        return fales;
//}
////�ڶ������ҳ�����������������
//void findFactors(int factors) {
//    int theFactors[SIZE] = { 0 }; //�Ȱ�����Ԫ�س�ʼ��Ϊ 0 
//    int i, k;
//    theFactors[0] = 1; // �����������������бض���һ���� 1 ����������ֱ���Ȱ������������
//    for (i = 2, k = 1; i < factors; i++) { // ������ 1 �Ǳ��еģ���ô���ǾͿ���ֱ�Ӵ� 2 ��ʼ�Ұ�
//        if (factors % i == 0)
//            theFactors[k++] = i;
//    }
//    //����������������������
//    printFactors(theFactors, factors);
//}
////������������������������������
//void printFactors(int* factors, int thisfactors) {
//    int i;
//    printf("%d its factors are", thisfactors);
//    for (i = 0; factors[i] != 0; i++) { //����һ��ʼ����ĳ�ʼ��Ԫ��Ϊ 0 �� ��������ֱ���������Ϊ 0 �����ݼ���
//        printf(" %d", factors[i]);
//    }
//    printf("\n");
//}