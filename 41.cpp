// #include<stdio.h>

// bubble_sort(int* arr[]) {
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     printf("%d", sz);
// }
// int main() {
//     int arr[10];
//     bubble_sort(&arr);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int arr[] = {1,2,(3,4),5};
//     printf("%d\n", sizeof(arr));
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     char str[] = "hello bit";
//     printf("%d %d\n", sizeof(str), strlen(str));
// 	return 0;
// }
// #include<stdio.h>
// #include<string.h>

// int main() {
//     char acX[] = "abcdefg";
//     char acY[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
//     printf("X%d Y%d", sizeof(acX), sizeof(acY));
//     printf("X%d Y%d", strlen(acX), strlen(acY));
//     return 0;
// }

// #include <stdio.h>

// void bubble_sort(int arr[], int sz)
// {
//     int tmp;
//     for (int i = 0; i < sz - 1; i++)
//     {
//         for (int j = 0; i < sz - 1 - i; j++)
//         {
//             if (arr[j] < arr[j + 1])
//             {
//                 tmp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = tmp;
//             }
//         }
//     }
// }

// int main()
// {
//     int arr[10];
//     int sz = sizeof(arr) / sizeof(arr[0]);
//     printf("%d", sz);
//     for (int i = 0; i < sz; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     bubble_sort(arr, sz);
//     for (int i = 0; i < sz; i++)
//     {
//         printf("%d", arr[i]);
//     }
//     return 0;
// }
// #include<iostream>

// uisng namespace std;

// int main() {
//     int x, y;
//     int sum = 0;
//     cin >> x >> y;
//     if (x > y) swap(x, y);
//     for (int i = x + 1; i < y; i++) {
//         of (i % 2) {
//             sum += i;
//         }
//     }
//     cout << count << endl;
//     return 0;
// }

// #include<iostream>

// using namespace std;

// int main() {
//     int max;
//     int n, k; 
//     for (int i = 0; i < 100; i++) {
//         cin >> n;
//         if (i == 0) {
//             max = n;
//         }
//         if (max < n) {
//             swap(max, n);
//             k = i;
//         }
//     }
//     return 0;
// }

// #include<iostream>

// using namespace std;

// int main() {
//     int x;
//     while (x--) {
//         int n;
//         cin >> n;
//         for (int i = 1; i <= n; i++) {
//             count << i << ' ' << endl;
//         }
//     }
//     return 0;
// }
#include<iostream>

using namespace std;

int main() {
    int x;
    cin >> x;
    while (x--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cout << i << ' ' << endl;
        }
    }
    return 0;
}