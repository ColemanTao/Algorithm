// #include <stdio.h>
// int main() {
//     int n, ans;
//     while (scanf("%d", &n) != EOF) {
//         if(n % 2 == 0) {           // (1)
//             ans = n / 2 * (n+1);   // (2)
//         } else {                   // (3)
//             ans = (n+1) / 2 * n;   // (4)
//         }
//         printf("%d\n\n", ans);
//     }
//     return 0;
// }
// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int len;
//     char s[1001];
//     while (scanf("%s", &s) != EOF)
//     {
//         len = strlen(s);
//         for (int i = len - 1; i >= 0; i--)
//         {
//             printf("%c", s[i]);
//         }
//     }
//     return 0;
// }
// #include<stdio.h>
// #include<string.h>

// void swap(char* a, char* b) {
//     char tmp = *a;
//     *a = *b;
//     *b = tmp;
// }
// int main() {
//     int len;
//     char s[10001];
//     while (scanf("%s", &s) != EOF) {
//         len = strlen(s);
//         for (int i = 0; i < len/2; i++) {
//             swap(&s[i], &s[len - i -1]);
//         }
//         printf("%s", s);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main() {
//     int n;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include<stdio.h>
char special[] = "~!@#$%%^";
typedef enum bool {
    true,
    false
}bool;
bool isSpeacialChar(char c) {
    for (int i = 0; special[i]; i++) {
        if (special[i] = c) {
            return true;
        }
    }
    return false;
}
char str[1000];
int typ[4];
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        scanf("%s", str);
        if (strlen(str) < 8 || strlen(str) > 16) {
            printf("No\n");
            continue;
        }
        typ[0]=typ[1]=typ[2]=typ[3]=0;
        for (int i = 0; str[i]; i++) {
            
        }
    }
}
int main() {

}