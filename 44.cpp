// #include<iostream>

// using namespace std;

// void reverse_int(int* a) {
//     int* left = a;
//     int* right = a + 19;
//     while (left < right) {
//         swap(*left, *right);
//         left++, right--;
//     }
// }
// int main() {
//     int a[20];
//     for (int i = 0; i < 20; i++) {
//         cin >> a[i];
//     }
//     reverse_int(a);
//     for (int i = 0; i < 20; i++) {
//         printf("N[%d] = %d\n", i, a[i]);
//     }
//     return 0;
// }
// #include<iostream>

// using namespace std;

// int main() {
//     int arr[20];
//     int tmp[20];
//     for (int i = 0; i < 20; i++) {
//         cin >> arr[i];
//         arr[19 - i] = arr[i];
//     }
//     for (int i = 0; i < 20; i++) {
//         printf("N[%d] = %d\n", i, arr[i]);
//     }
//     return 0;
// }
// #include<iostream>

// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     while (cin >> n) {
//         int a0 = 0, a1 = 1, a2;
//         int tmp = n;
//         while (tmp--) {
//         a2 = a0 + a1;
//         a0 = a1;
//         a1 = a2;
//         }
//         printf("Fib(%d) = %d\n", n, a2);
//     }
//     return 0;
// }

// #include<iostream>

// using namespace std;

// int main() {
//     double m[12][12];
//     char c;
//     int n;
//     cin >> n >> c;
//     double sum = 0, count = 0;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < 12; j++) {
//             cin >> m[i][j];
//             sum += m[i][j];
//             count++;
//         }
//     }
//     if (c == 'S') {
//         printf("%.1lf", sum);
//     }
//     else printf("%.1lf", sum / count);
//     return 0;
// }

// #include<iostream>

// using namespace std;

// int main() {
//     double m[12][12];
//     char c;
//     int n;
//     cin >> n >> c;
//     for (int i = 0; i < 12; i++) {
//         for (int j = 0; j < 12; j++) {
//             cin >> m[i][j];
//         }
//     }
//     double sum = 0;
//     for (int i = 0; i < 12; i++) {
//         sum += m[i][n];
//     }
//     if (c == 'S') {
//         printf("%.1lf", sum);
//     }
//     else {
//         printf("%.1lf", sum / 12);
//     }
//     return 0;
// }

// #include<iostream>

// using namespace std;

// int main() {
//     double m[12][12];
//     double sum = 0, count = 0;
//     char c;
//     cin >> c;
//     for (int i = 0; i < 12; i++) {
//         for (int j = 0; j < 12; j++) {
//             cin >> m[i][j];
//         }
//     }
//     for (int i = 1; i < 12; i++) {
//         for (int j = 12 - i; j < 12; j++) {
//             sum += m[i][j];
//             count++;
//         }
//     }

//     if (c == 'S') {
//         printf("%.1lf", sum);
//     }
//     else {
//         printf("%.1lf", sum / count);
//     }
//     return 0;
// }

// #include<iostream>

// using namespace std;

// int main() {
//     double m[12][12];
//     char c;
//     cin >> c;
//     for (int i =0 ; i < 12; i++) {
//         for (int j = 0; j < 12; j++) {
//             cin >> m[i][j];
//         }
//     }
//     double sum = 0;
//     int count = 0;
//     for (int i = 1; i < 12; i++) {
//         for (int j = 0; j < i; j++) {
//             sum += m[i][j];
//         }
//     }
//     if (c == 'S')
//         printf("%.1lf", sum);
//     else
//         printf("%.1lf", sum / count);
//     return 0;
// }
// #include <iostream>

// using namespace std;

// int main()
// {
//     double q[12][12];
//     char c;
//     cin >> c;
//     for (int i = 0; i < 12; i++)
//     {
//         for (int j = 0; j < 12; j++)
//         {
//             cin >> q[i][j];
//         }
//     }
//     double sum = 0, count = 0;
//     for (int i = 7; i < 12; i++)
//     {
//         for (int j = 12 - i; j < i; j++)
//         {
//             sum += q[i][j];
//             count++;
//         }
//     }
//     if (c == 'S')
//     {
//         printf("%.1lf", sum);
//     }
//     else
//     {
//         printf("%.1lf", sum / count);
//     }
//     return 0;
// }
// #include<iostream>

// using namespace std;

// int main() {
//     double q[12][12];
//     char c;
//     cin >> c;
//     for (int i = 0; i < 12; i++) {
//         for (int j = 0; j < 12; j++) {
//             cin >> q[i][j];
//         }
//     }
//     double sum = 0, count = 0;
//     for (int i = 1; i <= 5; i++) {
//         for (int j = 12 - i; j < 12; j++) {
//             sum += q[i][j];
//             count ++;
//         }
//     }
//     for (int i = 6; i <= 10; i++) {
//         for (int j = i + 1; j < 12; j++) {
//             sum += q[i][j];
//             count++;
//         }
//     }
//     if (c == 'S')
//     printf("%.1lf", sum);
//     else
//     printf("%.1lf", sum / count );
//     return 0;
// }
// #include<iostream>

// using namespace std;

// int main() {
//     int n;
//     while(cin >> n, n) {
//         int q[100][100];
//         for (int i = 0; i < n; i++) {

//         }
//     }

//     return 0;
// }

// #include <iostream>

// using namespace std;

// const int N = 110;
// int n;
// int q[N][N];
// int main()
// {
//     while (cin >> n, n)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = i, k = 1; j < n; j++, k++)
//             {
//                 q[i][j] = k;
//                 q[j][i] = k;
//             }
//         }
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 printf("%d ", q[i][j]);
//             }
//             cout << endl;
//         }
//     }
//     return 0;
// }

// #include<iostream>

// using namespace std;

// int n;
// int main() {
//     while (cin >> n, n) {
//         for (int i = 1; i <= n; i++) {
//             for (int j = i; j >= 1; j--) cout << j << ' ';
//             for (int j = i + 1; j <= n; j++)  cout << j - i + 1 << ' ';
//             cout << endl; 
//         }
//         cout << endl;
//     }
//     return 0;
// }
// #include<iostream>

// using namespace std;

// int main() {
//     int n;
//     while (cin >> n, n) {
//         for (int i = n; i >= 1; i--) {
//             for (int j = )
//         }
//     }
//     return 0;
// }
#include<iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            
        }
    }
    return 0;
}