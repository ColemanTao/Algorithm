// #include<iostream>
// using namespace std;

// int main() {
//     int c[7] = {100, 50, 20, 10, 2, 1};
//     int n;
//     cin >> n;
//     for (int i = 0; i < 7; i++) {
//         printf("%d nota(s) de R$ %d,00", n / 100, c[i]);
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;

// const int N = 1e6 + 10;
// int n;
// int q[N];

// void quick_sort(int q[], int l, int r) {
//     if (l >= r) {
//         return;
//     }
//     int x = q[l + r >> 1], i = l - 1, j = r + 1;
//     while (i < j) {
//         while (q[--i] < x);
//         while (q[++j] > x);
//         if (i < j) swap(q[i], q[j]);
//     }
//     quick_sort(q, l, j);
//     quick_sort(q, j + 1, r);
// }
// int main() {
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &q[i]);
//     }
//     quick_sort(q, 0, n - 1);
//     for (int i = 0; i < n; i++) {
//         printf("%d", q[i]);
//     }
//     return 0;
// }
#include<iostream>
#include<cstdio>
using namespace std;
#define P 3.14159

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << "TRIANGULO：" << a * c;
    cout << "CIRCUL"
}