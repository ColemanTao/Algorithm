// #include<stdio.h>

// int Pr(int n) {
//     if (n > 9) {
//         Pr(n / 10);
//     }
//     printf("%d", n % 10);
// }


// int main() {
//     int n;
//     scanf("%d", &n);
//     Pr(n);
//     return 0;
// }
//编写函数不允许创建临时变量，求字符串的长度
// #include<stdio.h>
// #include<string.h>

// int main() {
//     char ch[] = { 0 };
//     scanf("%s", ch);
//     int str = strlen(ch);
//     return 0;
// }

// #include<stdio.h>

// int Str(char* str) {
//     int count = 0;
//    while (*str != '\0') {
//         count++;
//         (*str++);
//    } 
// }
// int main() {
//     char arr[] = "abcdef";
//     int len = strlen(arr);

//     int len1 = Str(arr);
//     return 0;
// }

#include<stdio.h>

int Str(char* str) {
    int count = 0;
    while (*str != '\0') {
        count++;
        str++;
    }
}
int main() {
    char arr[] = "abcd";
    printf("%d", Str(arr));
    return 0;
}