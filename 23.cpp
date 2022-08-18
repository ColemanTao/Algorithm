// #include<iostream>

// using namespace std;

// const int N = 1e6 + 10;

// int n;
// int q[N];

// void quick_sort(int q[], int l, int r) {
//     if (l >= r) return;
//     int x = q[l], i = l - 1, j = r + 1;
//     while (i < j) {
//         do i ++; while (q[i] < x);
//         do j ++; while (q[j] > x);
//         if (i < j) swap(q[i], q[j]);
//     }
//     quick_sort(q, l, j);
//     quick_sort(q, j + 1, r);
// }


// int main() {
//     scanf("%d", &n);
//     for (int i = 0; i < n; i ++) scanf("%d", &q[i]);
//     quick_sort(q, 0, n - 1);
//     for (int i = 0; i < n; i ++) printf("%d ", q[i]);
//     return 0;
// }
// #include<iostream>
// using namespace std;

// const int N = 1e6 + 10;

// int n;
// int q[N];

// void quick_sort(int q[], int l, int r) {
//     if (l >= r) return;
//     int x = q[l], i = l - 1, j = r + 1;
//     while (i < j) {
//         do i ++ ; while (q[i] < x);
//         do j ++ ; while (q[j] > x);
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

// #include<iostream>
// using namespace std;

// const int N = 1e6 + 10;
// int n;
// int q[N];

// void quick_sort(int q[], int l, int r) {
//     if (l >= r) return;
//     int x = q[l + r >> 1], i = l - 1, j = r + 1;
//     while (i < j) {
//         do i++; while (q[i] < x);
//         do j--; while (q[j] > x);
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
//         printf("%d ", q[i]);
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;

// const int N = 1e5 + 10;

// int n, k;
// int q[N];

// void quick_sort(int q[], int l, int r) {
//     if (l <= r) {
//         return;
//     }
//     int x = q[l + r >> 1], i = l - 1, j = r + 1;
//     while (i < j) {
//         do i++; while (q[i] < x);
//         do j--; while (q[j] > x);
//         if (i < j) swap(q[i], q[j]);
//     }
//     quick_sort(q, l, j);
//     quick_sort(q, j + 1, r);
// }
// int main() {
//     scanf("%d %d", &n, &k);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &q[i]);
//     }
//     quick_sort(q, 0, n - 1);
//     printf("%d", q[k - 1]);
//     return 0;
// }
// #include<iostream>

// using namespace std;

// const int N = 1e5 + 10;
// int n, k;
// int q[N];

// int quick_sort(int l, int r, int k) {
//     if (l == r) return q[l];
//     int x = q[r + l >> 1], i = l - 1, j = r + 1;
//     while (i < j) {
//         do i++; while (q[i] < x);
//         do j--; while (q[j] > x);
//         if (i < j) swap(q[i], q[j]);
//     }
//     int sl = j - l + 1;
//     if (k <= sl) return quick_sort(l, j, k);
//     else return quick_sort(j + 1, r, k - sl);
// }
// int main() {
//     cin >> n >> k;
//     for (int i = 0; i < n; i++) cin >> q[i];
//     cout << quick_sort(0, n - 1, k) << endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main() {
//     int a, b, c, d;
//     cin >> a >> b >> c >> d;
//     cout << (a * b) - (c * d);
// }
// #include<stdio.h>
// #include<math.h>
// int main() {
//     double x[2], y[2];
//     scanf("%lf %lf %lf %lf %lf", &x[0], &x[1], &y[0], &y[1]);
//     double z = sqrt((x[0] - x[1]) * (x[0] - x[1]) + (y[0] - y[1]) * (y[0] - y[1]));
//     printf("%.4lf", z);
//     return 0;
// }
#include<stdio.h>
int main() {
    int n, a[7] = {100, 50, 20, 10, 5, 2, 1};
    scanf("%d", &n);
    
    return 0;
}