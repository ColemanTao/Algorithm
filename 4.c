// #include <stdio.h>
// int main()
// {
//     int n, m, count = 0;
//     scanf("%d %d", &m, &n);
//     int c = n ^ m;
//     while (c != 0)
//     {
//         count++;
//         c = c & (c - 1);
//     }
//     printf("%d\n", count);
//     return 0;
// }
// #include<stdio.h>

// int main() {
//     int arr[10] = {0};
//     for (int i = 0; i < 10; i++) {
//         printf("%d ", *(arr+i));
//     }
//     return 0;
// }
#include<iostream>

using namespace std;

const int N = 1e5+10;
int n;
int q[N];

void quick_sort(int q[], int l, int r) {
    if (l >= r) return;
    int x = q[l + r >> 1], i = l - 1, j = r + 1;
    while (i < j) {
        while (q[++i] < x);
        while (q[--j] > x);
        if (i < j) swap(q[i], q[j]);
    }
    quick_sort(q, l, j);
    quick_sort(q, j + 1, r);
}
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> q[i];
    }
    quick_sort(q, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << q[i] << ' ';
    }
    return 0;
}