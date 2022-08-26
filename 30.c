// #include<stdio.h>

// void swap1(int* pa, int* pb) {

// }

// void swap2(int* pa, int* pb) {

// }
// int main() 
// {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     int* p1 = &a;
//     int* p2 = &b;
//     swap1(p1, p2);
//     swap2(&a, &b);
//     return 0;
// }

// #include<stdio.h>

// int arr[] = {1,2,3,4,5,6,7,8,9,10};
// int binary_search(int k) 
// {
//     int sz = sizeof(arr) / sizeof(arr[0]);
//     int left = 0;
//     int right = sz - 1;

//     while (left <= right) 
//     {
//         int mid = left + (right - left) / 2;
//         if (arr[mid] < k) 
//         {
//             left = mid + 1;
//         }
//         else if (arr[mid] > k) 
//         {
//             right = mid - 1;
//         }
//         else return mid;
//     }
//     return -1;
// }

// int main() 
// {
//     int k;
//     scanf("%d", &k);
//     int ret = binary_search(k);
//     if (-1 == ret) 
//     printf("N");
//     else
//     {
//         printf("%d", ret);
//     }
//     return 0;
// }
// #include<stdio.h>
// #include<math.h>

// int Su(int n) {
//     for (int i = 2; i <= sqrt(n); i++) {
//         if (n % i == 0) 
//             return 0;
//     }
//     return 1;
// }

// int main() {
//     for (int i = 101; i <= 200; i+=2) {
//         if (Su(i) == 1) {
//             printf("%d ", i);
//         }
//     }
//     return 0;
// }


// #include<stdio.h>

// void change(int *a, int *b) {
//     int tmp = *a;
//     *a = *b;
//     *b = tmp;
// }

// int main() {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     change(&a, &b);
//     printf("%d %d", a, b);
//     return 0;
// }

// #include<stdio.h>

// void Plu(int n) {
//     int i, j;
//     for (i = 1; i <= n; i++) {
//         for (j = 1; j <= i; j++) {
//             printf("%-2d*%2d=%2d ", i, j, i * j);
//         }
//         printf("\n");
//     }
// }

// int main() {
//     int n;
//     scanf("%d", &n);
//     Plu(n);
//     return 0;
// }

#include<stdio.h>


int IsLeapYear(int n) {
    return ((n % 4 == 0) && n % 100 != 0)||(n % 400 == 0);
}

int main() {
    int y;
    scanf("%d", &y);
    if (IsLeapYear(y)) {
      printf("shi");
    }
}