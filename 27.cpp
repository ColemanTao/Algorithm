// #include<iostream>
// #include<cmath>
// #include<cstdio>
// using namespace std;
// int main() {
//     int l;
//     cin >> l;
//     int conut = l / 0.5;
//     cout << count << ' ' << "minutos" << endl; 
//     return 0;
// }
// #include<iostream>
// #include<cstdio>
// using namespace std;

// int main() {
//     int s, t;
//     cin >> s >> t;
//     double x = s * t;
//     printf("%.3lf", x * (1.0 / 12));
//     return 0;
// }
// #include<iostream>
// #include<cstdio>
// using namespace std;
// int main() {
//     int q[6] = {100, 50, 20, 10, 5, 2};
//     double x[6] = {1, 0.5, 0.1, 0.05, 0.01};
//     int n;
//     scanf("%d", &n);
//     printf("NOTAS\n");
//     for (int i = 0; i < 6; i++) {
//         printf("%d nota(s) de R$ %d.00\n", n / q[i], q[i]);
//         n -= q[i] * (n / q[i]);
//     }
//     printf("MOEDAS");
//     for (int j = 0; j < 6; j++) {
//         peintf("")
//     }
//     return 0;
// }
// #include<iostream>
// #include<cmath>
// #include<cstdio>
// using namespace std;

// int main(){
//     double n;
//     cin>>n;
//     double nota[6]={100,50,20,10,5,2};
//     double modea[6]={1,0.5,0.25,0.1,0.05,0.01};
//     cout<<"NOTAS:"<<endl;
//     for(int i=0;i<6;i++){
//         int num=int(n/nota[i]);
//         printf("%d nota(s) de R$ %.2lf\n",num,nota[i]);
//         n=n-num*nota[i];
//     }
//     cout<<"MOEDAS:"<<endl;
//     for(int i=0;i<6;i++){
//         int num=int(n/modea[i]+10e-3);
//         printf("%d moeda(s) de R$ %.2lf\n",num,modea[i]);
//         n=n-num*modea[i];
//     }
//     return 0;
// }
// #include<iostream>
// #include<cstdio>

// using namespace std;

// int main() {
//     int old;
//     cin >> old;
//     int ano, mes, dia;
//     ano = old / 365;
//     mes = old % 365 / 30;
//     dia = old % 365 % 30;
//     printf("%d ano(s)\n%d mes(es)\n%d dia(s)", ano, mes, dia);
//     return 0;
// }
// #include<cstdio>
// #include<iostream>
// using namespace std;

// int main() {
//     int a, b;
//     cin >> a >> b;
//     if (a % b && b % a)
//         cout << "Nao sao Multiplos" << endl;
//     else
//         cout << "sao Multiplos" << endl;
//     return 0;
// }
// #include<iostream>
// #include<cstdio>
// using namespace std;

// const int N = 1e6 + 10;
// int n;
// int q[N];

// void quick_sort(int q[], int l, int r) {
//     if (l >= r) return;
//     int x = q[r + l >> 1], i = r - 1, j = l + 1;
//     while (i < j) {
//         while (q[++i] < x);
//         while (q[--i] > x);
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

// const int N = 1000010;

// int n;
// int q[N],tmp[N];

// void merge_sort(int q[], int l, int r) {
//     if (l >= r) return;
//     int mid = l + r >> 1;
//     merge_sort(q, l, mid), merge_sort(q, mid + 1, r);
//     int k = 0, i = l, j = r;
//     while (i <= mid && j <= r) {
//         if (q[i] <= q[j]) {
//             tmp[k++] = q[i++];
//         }
//         else {
//             tmp[k++] = q[j++];
//         }
//         while (j <= mid) {
//             tmp[k++] = q[i++]; 
//         }
//         while (j <= r) {
//             tmp[k++] = q[j++];
//         }
//         for (int i = 0; i < n; i++) {
//             tmp[i] = q[i];
//         }
//     }
// }
// int main() {
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &q[i]);
//     }
//     merge_sort(q, 0, n - 1);
//     for (int i = 0; i < n; i++) {
//         printf("%d ", q[i]);
//     }
// }
// #include<iostream>
// using namespace std;

// const int N = 1e6+10;
// int n;
// int q[N], temp[N];

// void merge_sort(int q[], int l, int r) {
//     if (l >= r) {
//         return;
//     }
//     int mid = l + r >> 1;
//     merge_sort(q, l, mid), merge_sort(q, mid + 1, r);
//     int k = 0, i = l, j = mid + 1;
//     while (i <= mid && j <= r) {
//         if (q[i] >= q[j]) temp[k++] = q[j++];
//         else temp[k++] = q[i++];
//     }
//     while (i <= mid) temp[k++] = q[i++];
//     while (j <= r) temp [k++] = q[j++];
//     for (i = l, j = 0; i <= r; i++, j++) {
//         q[i] = temp[j];
//     }
// }
// int main() {
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &q[i]);
//     }
//     merge_sort(q, 0, n - 1);
//     for (int i = 0; i < n; i++) {
//         printf("%d", q[i]);
//     }
//     return 0;
// }
#include<iostream>
using namespace std;

const int N = 1e6+10;

int n;
int q[N], temp[N];

void merge_sort(int q[], int l, int r) {
    if (l >= r) {
        return;
    }
    int mid = l + r >> 1;
    merge_sort(q, l, mid), merge_sort(q, mid + 1, r);
    int k = 0, i = l, j = mid + 1;
    while (i <= mid && j <= r) {
        if (q[i] >= q[j]) temp[k++] = q[j++];
        else temp[k++] = q[i++];
    }
    while (i <= mid) temp[k++] = q[i++];
    while (j <= r) temp[k++] = q[j++];
    for (i = l, j = 0; i <= r; i++, j++) {
        q[i] = temp[j];
    }
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &q[i]);
    }
    merge_sort(q, 0, n - 1);
    for (int i = 0; i < n; i++) {
        printf("%d", q[i]);
    }
    return 0;
}