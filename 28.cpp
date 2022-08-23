#include<iostream>

using namespace std;

typedef long long LL;
const int N = 100000;

int n;
int q[N], int temp[N];

LL merge_sort(int l, int r) {
    if (l >= r) return 0;
    int mid = l + r >> 1;
    LL ret = merge_sort(l, mid) + merge_sort(mid + 1, r);
    int k = 0, i = l, j = mid + 1;
    while (i <= mid && j <= r) {
        if (q[i] <= q[j]) temp[k++] = q[i++];
        else {
            temp[k++] = q[j++];
            ret += mid - i + 1;
        }
    }
    while (i <= mid) temp[k++] = q[i++];
    while (j <= r) temp[k++] = q[j++];
    for (i = l, j = 0; i <= r; i++, j++) {
        q[i] = temp[j];
    }
    return ret;
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &q[i]);
    }
    cout << merge_sort(0, n - 1) << endl;
    return 0;
}
#include<iostream>
using namespace std;

const int N = 1e5+10;

int n;
int q[N], temp[N];

int merge_sort(int l, int r) {
    if (l >= r) return 0;
    int mid = l + r >> 1;
    int res = merge_sort(l, mid) + merge_sort(mid + 1, r);
    int k = 0, i = l, j = mid + 1;
    while (i <= mid && j <= r) {
        if (q[j] >= q[i]) temp[k++] = q[i++];
        else {
            temp[k++] = q[j++];
            res += mid - i + 1;
        }

    }
    while (i <= mid) temp[k++] = q[i++];
    while (j <= r) temp[k++] = q[j++];
    for (i = l, j = 0; i <= r; i++, j++) {
        q[i] = temp[j];
    }
    return res;
}
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &q[i]);
    }
    cout << merge_sort(0, n - 1) << endl;
    return 0;
}

#include<iostream>
using namespace std;

int main() {
    int a = 1;
    do {
        printf("%d ", a++);
    }while (a <= 10);
    return 0;
}
#include<iostream>

using namespace std;
int main() {
    int n;
    scanf("%d", &n);
    int plu = 1;
    for (int i = 1; i <= n; i++) {
        plu *= i;
    }
    cout << plu;
    return 0;
}
#include<iostream>
using namespace std;

int Plu(int n) {
    if (n <= 1) return 1;
    else return Plu(n - 1) * n;
}
int main() {
    int n;
    cin >> n;
    cout << Plu(n) << endl;
    return 0;
}
#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int res = 1;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        res *= i;
        sum += res;
    } 
    cout << sum;
    return 0;
}

#include<iostream>
using namespace std;

int f(int n) {
    if (n <= 1) return 1;
    else return f(n - 1) * n;
}
int main() {
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += f(i);
    }
    cout << sum;
    return 0;
}
#include<iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,20};
    int left = 0, right = 0;
    int k = 7;
    int mid = right + left >> 1;
    if (arr[mid] < k) {
        left = mid + 1;
    }
    else if (arr[mid] > k) {
        right = mid - 1;
    }
    else {
        printf("z");
    }
}