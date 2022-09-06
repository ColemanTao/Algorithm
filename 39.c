// #include<stdio.h>

// void print(int n) {
//     if (n > 9) {
//         print(n / 10);
//     }
//     printf("%d ", n % 10);
// }
// int main() {
//     int n;
//     scanf("%d", &n);
//     print(n);
//     return 0;
// }

// #include<stdio.h>

// int C(int n) {
//     if (n <= 1) {
//         return 1;
//     }
//     else {
//         return C(n - 1) * n;
//     }
// }

// int main() {
//     int n;
//     scanf("%d", &n);
//     int ret = C(n);
//     printf("%d", ret);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main() {
//     char s[]="abcdef";
//     int len = strlen(s);
//     printf("%d", len);
//     return 0;
// }
// #include<stdio.h>

// int Str_len(char* n) {
//     int count = 0;
//     while (*n != '\0') {
//         count++;
//         n++;
//     }
//     return count;
// }
// int main() {
//     char s[] = "abcdef";
//     int ret = Str_len(s);
//     printf("%d", ret);
//     return 0;
// }
// #include<stdio.h>

// int len(char* n) {
//     if (*n != '\0') {
//         return 1 + len(n + 1);
//     }
//     else {
//         return 0;
//     }
// }
// int main() {
//     char s[] = {0};
//     scanf("%s", s);
//     int ret = len(s);
//     printf("%d", ret);
//     return 0;
// }
// #include<stdio.h>
// #include<string.h>
// char arr[] = "abcdef";
// int len = strlen(arr);
// int tmp;
// void reverse_string(char* string) {
//     int i = 0, j = len - 1;
//     if (i < j) {
//         tmp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = tmp;
//         j--;
//         reverse_string(i++);
//     }
// }
// int main() {
//     reverse_string(arr);
//     printf("%s", arr);
//     return 0;
// }

// #include <stdio.h>
// int sum = 0;
// int DigitSum(int n)
// {
//     if (n > 9)
//     {
//         DigitSum(n / 10);
//     }
//     return sum + n % 10;
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int ret = DigitSum(n);
//     printf("%d", ret);
//     return 0;
// }
//#include <stdio.h>
// int sum = 0;
// int DigitSum(int n)
//{
//    if (n > 9)
//    {
//        DigitSum(n / 10);
//    }
//    sum += n % 10;
//    return sum;
//}
// int main()
//{
//    int n;
//    scanf("%d", &n);
//    int ret = DigitSum(n);
//    printf("%d", ret);
//    return 0;
//}

// #include<stdio.h>
// int n;
// int pow(int k) {
// 	if (k <= 0) {
// 		return 1;
// 	}
// 	else
// 		return n * pow(k - 1);
// }
// int main() {
// 	int k;
// 	scanf("%d %d", &n, &k);
// 	int ret = pow(k);
// 	printf("%d", ret);
// 	return 0;
// }
// #include<stdio.h>

// int sum = 0;
// int fibe(int n) {
//     int a1 = 1, a2 = 1, a3;
//     for (int i = 3; i <= n; i++) {
//         a3 = a1 + a2;
//         a1 = a2;
//         a2 = a3;
//     }
//     return a3;
// }
// int main() {
//     int n;
//     scanf("%d", &n);
//     int ret = fibe(n);
//     printf("%d", ret);
//     return 0;
// }

// #include<stdio.h>

// int fibe(int n) {
//     if (n <= 2) {
//         return 1;
//     }
//     return fibe(n - 1) + fibe(n - 2);
// }
// int main() {
//     int n;
//     scanf("%d", &n);
//     int ret = fibe(n);
//     printf("%d", ret);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// void Change(char *a)
// {
//     int len = strlen(a);
//     int i = 0;
//     int j = len - 1;
//     int tmp;
//     while (i < j)
//     {
//         tmp = a[j];
//         a[j] = a[i];
//         a[i] = tmp;
//         i++, j--;
//     }
// }
// int main()
// {
//     char a[] = "abcdef";
//     Change(a);
//     printf("%s", a);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// char a[] = "abcdef";
// int i = 0;
// int len = strlen(a);
// int j = len - 1;
// int tmp;
// void Change(char* a) {
//     if (i == j) {
//         return;
//     }
//     else {

//     }
// }
// int main() {
//     Change(a);
//     printf("%s", a);
//     return 0;
// }

// #include <stdio.h>
// int sum = 0;
// int DigitSum(int n)
// {
//     if (n > 9)
//     {
//         DigitSum(n / 10);
//     }
//     return sum += n % 10;
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int ret = DigitSum(n);
//     printf("%d", ret);
//     return 0;
// }

#include<stdio.h>
int my_len(char* str)
{
	int count = 0;
	while (*str!='\0')
	{
		count++;
		str++;
	}
	return count;
}
void reverse_string(char str[])
{
	int len= my_len(str);
	char temp = str[0];
	str[0] = str[len - 1];
	str[len - 1] = '\0';
	if (my_len(str+1) >= 2)
	{
		reverse_string(str + 1);
	}
	str[len - 1] = temp;
}
int main()
{
	char arr[10] = "abcdef";
	reverse_string(arr);
	printf("%s",arr);
	return 0;
}