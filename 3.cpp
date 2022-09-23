// #include<iostream>

// using namespace std;

// const int N = 1e5+10;
// int n;
// int q[N];

// void quick_sort(int q[], int l, int r) {
//     if (l >= r) return;
//     int x = q[l + r >> 1], i = l - 1, j = r + 1;
//     while (i < j) {
//         while (q[++i] < x);
//         while (q[--j] > x);
//         if (i < j) swap(q[i], q[j]);
//     } 
//     quick_sort(q, l, j);
//     quick_sort(q, j + 1, r);
// }
// int main() {
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         cin >> q[i];
//     }
//     quick_sort(q, 0, n - 1);
//     for (int i = 0; i < n; i++) {
//         cout << q[i] << ' ';
//     }
//     return 0;
// }
// #include<iostream>

// using namespace std;

// const int N = 1e5+10;
// int n;
// int q[N], tmp[N];

// void merge_sort(int q[], int l, int r) {
//     if (l >= r) return ;
//     int mid = l + r >> 1;
//     merge_sort(q, l, mid), merge_sort(q, mid + 1, r);
//     int k = 0, i = l, j = mid + 1;
//     while (i <= mid && j  <= r) {
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

// #include<iostream>

// using namespace std;

// const int N = 1e5;
// int n, m;
// int q[N];

// int main() {
//     cin >> n >> m;
//     for (int i = 0; i < n; i++) {
//         cin >> q[i];
//     }
//     while (m--) {
//         int x;
//         cin >> x;
//         int l = 0, r = n - 1;
//         while (l < r) {
//             int mid = l + r + 1>> 1;
//             if (q[mid]  >= x) l = mid;
//             else r = mid - 1;
//         }
//         if (q[l] != x) cout << "-1 -1" << endl;
//         else {
//             cout << l << ' ';
//             int l = 0, r = n - 1;
//             while (l < r) {
//                 int mid = l + r >> 1;
//                 if (q[mid] <= x) r = mid;
//                 else l = mid + 1;
//             }
//             cout << l << endl;
//         }
//     }
//     return 0;
// }

// #include<iostream>

// using namespace std;

// const int N = 1e5;
// int n;
// int q[N];
// void quick_sort(int q[], int l, int r) {
//     if (l >= r) return;
//     int x = q[l + r >> 1], i = l - 1, j = r + 1;
//     while (i < j) {
//         while (q[++i] < x);
//         while (q[--j] > x);
//         if (i < j) swap(q[i], q[j]);
//     }
//     quick_sort(q, l, j);
//     quick_sort(q, j + 1, r);
// }
// int main() {
//     cin >> n;
//     for (int i = 0; i< n; i++) {
//         cin >> q[i];
//     }
//     quick_sort(q, 0, n - 1);
//     for (int i = 0; i < n; i++) {
//         cout << q[i] << ' ';
//     }
//     return 0;
// }

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
//     for (int i =0 ; i < n; i++) {
//         cin >> q[i];

//     }
//     quick_sort(q, 0, n - 1);
//     for (int i = 0; i< n; i++) {
//         cout << q[i] << ' '; 
//     }
//     return 0;
// }    int x = q[l + r >> ],i 
// #include<iostream>

// using namespace std;

// int main() {
//     int i = 1;
//     int ret = (++i) + (++i) + (++i);
//     cout << ret << endl;
// }
// #include<iostream>
// using namespace std;

// int main() {
// 	int a, b, c;
// 	a = 5;
// 	c = ++a;
// 	b = ++c, c++, ++a, a++;
// 	b += a++ + c;
// 	cout << a << ' ' << b << ' ' << c << endl;
// 	return 0;
// }
