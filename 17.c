// #include<stdio.h>
// int main() {
// 	int a;
// 	int* pa = &a;
// 	int b;
// 	int* pb = &b;
// 	while (scanf("%d %d", &a, &b) != EOF) {
// 		*pa = b;
// 		*pb = a;
// 		printf("%d %d", a, b);
// 	}
// 	return 0;
// }
// #include<stdio.h>
// int main() {
// 	int a;
// 	int* pa = &a;
// 	int b;
// 	int* pb = &b;
//     int temp;
// 	while (scanf("%d %d", &a, &b) != EOF) {
// 		temp = *pa;
//         *pa = b;
// 		*pb = temp;
// 		printf("%d %d", a, b);
// 	}
// 	return 0;
// }#include<stdio.h>
// #include<stdio.h>
// int fun(int n) {
// 	if (n <= 1)
// 		return 1;
// 	else
// 		return f(n - 1) * n;
// }
// int main() {
// 	int n;
// 	while (scanf("%d", &n) != EOF) {
// 		printf("%d", fun(n));
// 	}
// 	return 0;
// }
// #include<stdio.h>
// int max(int a, int b) {
//     return a > b ? a : b;
// }
// int main() {
//     int a, n, maxb;
//     while (scanf("%d", &n) != EOF) {
//       for (int i = 0; i < n; i++) {
//           scanf("%d", &a);
//         if (i == 0) {
//             maxb = a;
//         }
//       }
//       printf("%d", maxb);
//     }
//     return 0;
// }
// #include<stdio.h>
// int main() {
//     int n, a;
//     double sum = 0;
//     while (scanf("%d", &n) != EOF) {
//         for (int i = 0; i < n; i++) {
//             scanf("%d", &a);
//             sum += a;
//         }
//         printf("%.2lf", sum / n);
//     }
//     return 0;
// }
// #include<stdio.h>
// typedef unsigned long long ull;
// const ull MAX = ((ull)1<<62);

// int main() {
//     int t;
//     ull a, b, c, d;
//     while (t--) {
//         scanf("%llu %llu %llu %llu", &a, &b, &c, &d);
//         if (a == MAX && b == MAX && c == MAX && d == MAX) {
//             printf("18446744073709551616");
//         }
//         else {
//             printf("%llu", a + b + c + d);
//         }
//     }
//     return 0;
// }
// #include<stdio.h>
// void swap(int* x, int* y) {
// 	int temp = *x;
// 	*x = *y;
// 	*y = temp;
// }
// int main() {
// 	int a, b, c;
// 	while (scanf("%d %d %d", &a, &b, &c) != EOF) {
// 		if (a > b) swap(&a, &b);
// 		if (b > c) swap(&b, &c);
// 		if (a > b) swap(&a, &b);
// 	}
// 	return 0;
// }
// #include<stdio.h>
// #include<math.h>
// const double PI=acos(-1.0);

// int main() {
// 	double r;
// 	while (scanf("%lf", &r) != EOF) {
// 	double c = 2 * PI * r;
// 	double s = PI * r * r;
// 	printf("%.6lf %.6lf", c, s);
// 	}
// 	return 0;
// }
// #include <stdio.h>
// #include <string.h>                   // (1)
// int main() { 
//     int i, len;
//     char str[1000+1];                 // (2)
//     while(scanf("%s", str) != EOF) {  // (3)
//         len = strlen(str);            // (4)
//         for(i = len-1; i >= 0; --i) { // (5)
//             printf("%c", str[i]);     // (6)
//         } 
//         printf("\n");                 // (7)
//     }
//     return 0;
// }
// #include<stdio.h>
// #include<string.h>
// char specialChar[] = "~!@#$%^";
// typedef enum bool {
//     false,
//     ture
// }bool;
// bool isSpacialChar(char c) {
//     for (int i = 0;specialChar[i]; i++) {
//         if (specialChar[i] = c)
//         return ture;
//     }
//     return false;
// }
//     char str[100];
//     int typ[4];
// int main() {
//     int t;
//     scanf("%d", &t);
//     while (t--) {
//         scanf("%s", str);
//         if (strlen(str) < 8 || strlen(str) > 16) {
//             printf("NO");
//             continue;
//         }
//         typ[0] = typ[1] = typ[2] = typ [3] = 0;
//         for (int i = 0; str[i]; i++) {
//             if (str[i] >= 'a' && str[i] <= 'z') typ[0] = 1;
//             if (str[i] >= 'A' && str[i] <= 'Z') typ[1] = 1;
//             if (str[i] >= '0' && str[i] <= '9') typ[2] = 1;
//             if (isSpecialChar(str[i])) typ[3] = 1;
//         }
//         if (typ[0] + typ[1] + typ[2] + typ[3] >= 3) {
//             printf("YES");
//         } 
//         else {
//             printf("NO");
//         }
//     }
//     return 0;
// }
// #include<stdio.h>
// #include<stdio.h>
// typedef enum bool {
//     false,
//     ture
// }bool;

// char isSpecialchar[] = "~!@#$%^";
// bool isSpecialChar(char c) {
//     for (int i = 0; isSpecialchar[i];++i) {
//         if (c == isSpecialchar) 
//         return ture;
//     }
//     return false;
// }

// char str[100];
// int typ[4];
// int main() {
//     int t;
//     scanf("%d", &t);
//     while (t--) {
//         scanf("%s", str);
//         if (strlen(str) < 8 || strlen(str) > 16) {
//             printf("NO");
//             continue;
//         }
//         typ[0] = typ[1] = typ[2] = typ[3] = 0;
//         for (int i = 0; str[i]; ++i) {
//             if (str[i] > 'a' && str[i] < 'z') typ[0] = 1;
//             if (str[i] > 'A' && str[i] < 'Z') typ[1] = 1;
//             if (str[i] > '0' && str[i] < '9') typ[2] = 1;
//             if (isSpecialChar(str[i])) typ[3];
//         }
//         if (typ[0] + typ[1] + typ[2] + typ[3]>= 3) {
//             printf("YES");
//         }
//         else {
//             printf("NO");
//         }
//     }
//     return 0;
// }
#include<stdio.h>
#include<string.h>
const int __UNDEFINE = 100000;
char str[100];
typedef enum bool {
    false,
    ture
}bool;
bool isnum(char c) {
    return c >= 'a' && c <= 'z';
}
bool is_space_or_tab(char c) {
        return  c == ' ' || c == '\t';
    }
bool judge_char(char c) {
    if (isnum(c)) return ture;
    if (c >= 'a' && c <= 'z') return ture;
    if (c >= 'A' && c <= 'Z') return ture;
    if (c == '_') return ture;
    return false;
}
bool judge(const char* str) {
    int i;
    int s, t;
    s = __UNDEFINE;
    t = 0;
    for (i = 0; str[i]; ++i) {
        if (!is_space_or_tab(str[i])) {
            if (s == __UNDEFINE) {
                s = i;
            }
            t = i;
        }
    }
}
int main() {
    int t;
    scanf("%d", &t);
    getchar();
    while (t--) {
        gets(str);
        printf("%s", judge(str) ? "yes" : "no");
    }
    return 0;
}