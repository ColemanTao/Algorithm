// #include <iostream>

// using namespace std;

// int main()
// {
//     int a, n;
//     int sum = 0;
//     cin >> a;
//     while (cin >> n)
//     {
//         if (n <= 0)
//         {
//             continue;
//         }
//         while (n--)
//         {
//             sum += a;
//             a++;
//         }
//         break;
//     }
//     cout << sum;
//     return 0;
// }

// #include<iostream>

// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= ; i++) {
//         if (n % i == 0) {
//             cout << i << endl;
//         }
//     }
//     return 0;
// }

// #include<iostream>

// using namespace std;

// int main() {
//     int n, m;
//     int k = 1;
//     cin >> n >> m;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= m; j++) {
//             if (j == m) {
//                 cout << "PUM";
//                 break;
//             }
//             cout << k << ' ';
//             k++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include<iostream>

// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     for (int i = 2; i < 10000; i++) {
//         if (i % n == 2) {
//             cout << i << endl;
//         }
//     }
//     return 0;
// }

// #include<iostream>

// using namespace std;

// int main() {
//     int x;
//     int count = 0;
//     cin >> x;
//     while (count <= 6) {
//         if (x % 2) {
//             count++;
//             cout << x << endl;
//         }
//         x++;
//     }
//     return 0;
// }

// #include<iostream>

// using namespace std;

// int main() {
//     int n, a[10];
//     int sum = 0;
//     char t[11];
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         cin >> a[i] >> t[i];
//         sum += a[i];
//     }
// }

// #include<iostream>

// using namespace std;

// int main() {
//     int n, a[10];
//     int sum = 0, c = 0, r = 0, f = 0;
//     char t[11];
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         cin >> a[i] >> t[i];
//         sum += a[i];
//         if (t[i] == 'C') c += a[i];
//         if (t[i] == 'R') r += a[i];
//         if (t[i] == 'F') f += a[i];
//     }
//     printf("Total: %d animals\n", sum);
//     printf("Total coneys: %d\nTotal rats: %d\nTotal frogs: %d\n", c, r, f);
//     printf("Percentage of coneys: %.2lf %\n", c * 100.0 / sum);
//     printf("Percentage of rats: %.2lf %\n", r * 100.0 / sum);
//     printf("Percentage of frogs: %.2lf %\n", f * 100.0 / sum);
//     return 0;
// }

// #include <iostream>

// using namespace std;

// int main()
// {
//     int n, x, y;
//     cin >> n;
//     while (n--)
//     {
//         cin >> x >> y;
//         if (x % 2 == 0)
//             x++;
//         if (x % 2 != 0)
//             x += 2;
//         for (int i = 0; i < n; i++)
//         {
//             cout << x + i * 2 << endl;
//         }
//     }
//     return 0;
// }

// #include<iostream>

// using namespace std;

// int main() {
//     int a1 = 0, a2 = 1, a3 = 1;
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         int tmp = a1 + a2;
//         cout << a1 + a2 << ' ';
//         a3 = tmp;
//         a2 = tmp;
//         a1 = a2;
//     }
//     return 0;
// }
// #include<iostream>
// #include<algorithm>

// using namespace std;

// int main() {
//     int n, m;
//     while (cin >> m >> n, m * n > 0) {
//         int sum = 0;
//         if (m > n) swap(m, n);
//         for (int i = m; i <= n; i++) {
//             cout << i << ' ';
//             sum += i;
//         }
//         cout << "Sum=" << sum << endl;
//     }
//     return 0;
// }
// #include<iostream>
// #include<cstdio>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     while (n--) {
//         int x;
//         cin >> x;
//         int sum = 0;
//         for (int i = 1; i <= x; i++) {
//             if (x % i == 0) {
//                 sum += i;
//             }
//         }
//         if (sum == x) {
//             printf("%d is perfect\n", x);
//         }
//         else {
//             printf("%d is not perfect\n", x);
//         }
//     }
//     return 0;
// }
// #include<iostream>

// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     while (n--) {
//         int x;
//         cin >> x;
//         if (x != 2 && x % 2 == 0) {
//             printf("%d is not prime\n", x);
//             continue;
//         }
//         bool prime = true;
//         for (int i = 2; i * i <= n; i++) {
//             if (x % i == 0) {
//                 prime = false;
//                 break;
//             }
//         }
//         if (prime) {
//             printf("%d is prime\n", x);
//         }
//         else {
//             printf("%d is not prime\n", x);
//         }
//     }
//     return 0;
// }
// #include<iostream>

// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     for (int i = 0; i < 5; i++) {

//     }
//     return 0;
// }
#include<iostream>

using namespace std;

int main() {
    int n;
    int count = 0;
    cin >> n;
    int m = n;
    while (n--) {
        int x;
        cin >> x;
        if (10 <= x && x <= 20) {
            count++;
        }
    }
    cout << count << "in" << endl;
    cout << m - count << "out" << endl;
    return 0;
}