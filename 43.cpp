// #include<iostream>

// using namespace std;

// int main() {
//     int x[10];
//     for (int i = 0; i < 10; i++) {
//         cin >> x[i];
//         if (x[i] <= 0) {
//             x[i] = 1;
//         }
//     }
//     for (int i = 0; i < 10; i++) {
//         printf("x[%d] = %d\n", i, x[i]);
//     }
//     return 0;
// }
// #include <iostream>

// using namespace std;

// int main()
// {
//     int v, n[10];
//     cin >> v;
//     n[0] = v;
//     for (int i = 1; i < 10; i++)
//     {
//         n[i] = n[i - 1] * 2;
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("N[%d] = %d\n", i, n[i]);
//     }
//     return 0;
// }
// #include<iostream>

// using namespace std;

// int main() {
//     int a[100];
//     for (int i = 0; i < 100; i++) {
//         scanf("%d", a[i]);
//         if (a[i] < 10) {
//             printf("A[%d] = %d", i, a[i]);
//         }
//     }
//     return 0;
// }
// #include<iostream>

// using namespace std;

// int main() {
//     double M[12][12];
//     double l, sum = 0;
//     char c;
//     cin >> l >> c;
//     for (int i = 0; i < 12; i++) {
//         for (int j = 0; j < 12; j++) {
//             cin >> M[i][j];
//             if (i == l) {
//                 sum += M[i][j];
//             }
//         }
//     }
//     if (c == 'S') {
//         cout << sum << endl;
//     }
//     else {
//         cout << sum / 12 << endl;
//     }
// }
// #include<iostream>

// using namespace std;

// int main() {
//     double M[12][12];
//     double sum = 0;
//     char c;
//     cin >> c;
//     for (int i = 0; i < 12; i++) {
//         for (int j = 0; j < 12; j++) {
//             scanf("%lf", &M[i][j]);
//         }
//     }
//     for (int i = 0; i < 12; i++) {
//         for (int j = i + 1; j < 12; j++) {
//             sum += M[i][j];
//         }
//     }
//     if (c == 'S') printf("%.1lf", sum);
//     else printf("%.1lf", sum / 12);
//     return 0;
// }
// #include <iostream>

// using namespace std;

// int main()
// {
//     double m[12][12];
//     char c;
//     double sum = 0, a = 0;
//     cin >> c;
//     for (int i = 0; i < 12; i++)
//     {
//         for (int j = 0; j < 12; j++)
//         {
//             scanf("%lf", &m[i][j]);
//         }
//     }
//     for (int i = 0; i < 12; i++)
//     {
//         for (int j = 0; j < 12 - i - 1; j++)
//         {
//             sum += m[i][j];
//             a++;
//         }
//     }
//     if (c == 'S')
//         printf("%.1lf", sum);
//     else
//         printf("%.1lf", sum / a);
//     return 0;
// }
// #include<iostream>

// using namespace std;

// int main() {
//     double m[12][12];
//     char c = 0;
//     cin >> c;
//     double sum = 0;
//     double a = 0;
//     for (int i = 0; i < 12; i++) {
//         for (int j = 0; j < 12; j++) {
//             scanf("%lf", &m[i][j]);
//         }
//     }
//     for (int i = 0; i < 5; i++) {
//         for (int j = i + 1; j < 12 - 1 - i; j++) {
//             sum += m[i][j];
//             a++;
//         }
//     }
//     if (c == 'S') printf("%.1lf", sum);
//     else printf("%.1lf", sum / a);
//     return 0;
// }
// #include <iostream>

// using namespace std;

// int main()
// {
//     double m[12][12];
//     char c;
//     cin >> c;
//     double sum = 0, a = 0;
//     for (int i = 0; i < 12; i++)
//     {
//         for (int j = 0; j < 12; j++)
//         {
//             scanf("%lf", &m[i][j]);
//         }
//     }
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 0; j <= i - 1; j++)
//         {
//             sum += m[i][j];
//             a++;
//         }
//     }
//     for (int i = 6; i <= 10; i++)
//     {
//         for (int j = 0; j <= 10 - i; j++)
//         {
//             sum += m[i][j];
//             a++;
//         }
//     }
//     if (c == 'S')
//         printf("%.1lf", sum);
//     else
//         printf("%.1lf", sum / a);
//     return 0;
// }
// #include <iostream>
// #include<cstring>
// using namespace std;

// void reverse_string(char *str)
// {
//     int len = strlen(str);
//     char *right = str + len - 1;
//     char *left = str;
//     while (left < right)
//     {
//         swap(*left, *right);
//         left++, right--;
//     }
// }
// #include<iostream>
// #include<cstdio>
// #include<cstring>
// using namespace std;

// void reverse_string(char arr[]) {
//     int len = strlen(arr);
//     char left = 0;
//     char right = len - 1;
//     while (left < right) {
//         swap(arr[left], arr[right]);
//         right--, left++;
//     }
// }
// int main()
// {
//     char a[] = "abcdef";
//     reverse_string(a);
//     printf("%s", a);
//     return 0;
// }

#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
void reverse_string(char *str)
{
    int len = strlen(str);
    char tmp = *str;
    *str = *(str + len - 1);
    *(str + len - 1) = '\0';
    if (strlen(str + 1) <= 2)
    {
        reverse_string(str + 1);
    }
    *(str + len - 1) = tmp;
}
int main()
{
    char arr[] = "abcdef";
    reverse_string(arr);
    printf("%s", arr);
    return 0;
}