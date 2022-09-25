// #include<iostream>

// using namespace std;

// int main() {
//     int i = 0, k = 0;
//     for (i = 0, k = 0; k = 0; i++, k++) {
//         k++;
//     }
//     cin >> k;
//     return 0;
// }

// #include<iostream>

// using namespace std;
// //声明
// //形参可以省略int Add(int , int);
// int Add(int x, int y);
// int main() {
//     int a, b;
//     cin >> a >> b;
//     int sum = Add(a, b);
// }
// //定义
// int Add(int x, int y) {
//     return x + y;
// }
// #include<stdio.h>
// #include<math.h>

// int main() {
//     long long a, b, c, d;
//     scanf("%d %d %d %d", &a, &b, &c, &d);
//     long long s = abs(a - c) * abs(b - d);
//     printf("%d", s);
//     return 0;
// }
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int l, h;
    long long s;
    if (abs(a - c) && abs(b - d))
    {
        s = abs(a - c) * abs(b - d);
    }
    else
    {
        if (a - c == 0 && b - d == 0)
        {
            s = a * b;
        }
        else
        {
            if (a - c == 0)
            {
                s = abs(b - d) * a;
            }
            else
            {
                s = abs(a - c) * b;
            }
        }
    }
    printf("%lld", s);
    return 0;
}
