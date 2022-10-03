// // #include <iostream>

// // using namespace std;

// // int main()
// // {
// //     int n;
// //     cin >> n;
// //     printf("%d", n & 1);
// //     return 0;
// // }
// // #include<iostream>

// // using namespace std;

// // const int N = 1e5;
// // int n;
// // int q[N];

// // void quick_sort(int q[], int l, int r) {
// //     if (l >= r) {
// //         return ;
// //     }
// //     int x = q[l + r >> 1], i = l - 1, j = r + 1;
// //     while (l < r) {
// //         while (q[++i] < x);
// //         while (q[--j] > x);
// //         if (l < r)swap(q[i], q[j]);
// //     }
// //     quick_sort(q, l, j);
// //     quick_sort(q, j + 1, r);
// // }
// // int main() {
// //     cin >> n;
// //     for (int i = 0; i < n; i++) {
// //         cin >> q[i];
// //     }
// //     quick_sort(q, 0, n - 1);
// //     for (int i = 0; i < n; i++) {
// //         cout << q[i] << ' ';
// //     }
// //     return 0;
// // }

// #include<iostream>

// using namespace std;
// const int N = 1e5;
// int n;
// int q[N], tmp[N];

// void merge_sort(int q[], int l, int r) {
//     if (l >= r) return;
//     int mid = l + r >> 1;
//     merge_sort(q, l, mid), merge_sort(q, mid + 1, r);
//     int k = 0, i = l, j = mid + 1;
//     while (i <= mid && j <= r) {
//         if (q[i] <= q[j]) tmp[k++] = q[i++];
//         else tmp[k++] = q[j++];
//     }
//     while (i <= mid) tmp[k++] = q[i++];
//     while (j <= r) tmp[k++] = q[j++];
//     for (int i = l, j = 0; i <= r; i++, j++) {
//         q[i] = tmp[j];
//     }
// }
// int main() {
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         cin >> q[i];
//     }
//     merge_sort(q, 0, n - 1);
//     for (int i = 0; i < n; i++) {
//         cout << q[i] << ' ';
//     }
//     return 0;
// }
#include <iostream>

using namespace std;

const int N = 1e5;
int n;
int q[N];

quick_sort(int q[], int l, int r)
{
    if (l >= r)
        return;
    int x = q[l + r >> 1], i = l - 1, j = r + 1;
}
int main()
{
    return 0;
}