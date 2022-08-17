// #include<stdio.h>
// int main() {
//     int n;
//     while (scanf("%d", &n) != EOF) {
//         int sum = n * (n + 1) / 2;
//         printf("%d\n", sum);
//     }
//     return 0;
// }
// #include<stdio.h>
// int main() {
//     int a, b, c;
//     while (scanf("%d %d %d", &a, &b, &c) != EOF) {
//         int sum = a + b + c;
//         double aver = sum / 3.0;
//         printf("%d\n%.2lf\n", sum, aver);
//     }
//     return 0;
// }
// #include<stdio.h>
// int main() {
//     int n;
//     int sum = 0;
//     char c;
//     while (scanf("%d", &n) != EOF) {
//         sum += n;
//         c = getchar();
//         if (c == '\n') {
//             break;
//         }
//     }
//         printf("%d", sum);
//     return 0;
// }
// #include<stdio.h>
// int main() {
//     int n;
//     while (scanf("%d", &n) != EOF) {
//         printf("%d\n", n % 10);
//     }
//     return 0;
// }
// #include<stdio.h>
// int main() {
//     double f;
//     while (scanf("%lf", &f) != EOF) {
//         printf("%.2lfF = %.2lfC\n", f, (f - 32) * 5 / 9);
//     }
//     return 0;
// }
// #include<stdio.h>
// int main() {
//     int m, n, t, s;
//     while (scanf("%d %d %d %d", &m, &n, &t, &s) != EOF) {
//         printf("%d\n", (m + n + t) * s);
//     }
//     return 0;
// }
// #include<stdio.h>
// #define PI 3.14159
// int main() {
//     int n;
//     double r;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++) {
//         scanf("%lf", &r);
//         printf("Case %d: %.3lf\n", i, PI * r * r);
//     }
//     return 0;
// }
// #include<stdio.h>
// int main() {
//     int a1, a2, b1, b2, c1, c2, d1, d2;
//     while (scanf("%d %d %d %d %d %d %d %d", &a1, &a2, &b1, &b2, &c1, &c2) != EOF) {

//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// struct point{
//     int a,b;
// };
// int main()
// {
//    point x,y,z,f;
//     while(cin>>x.a>>x.b>>y.a>>y.b>>z.a>>z.b)
//     {
//     f.a=x.a-y.a+z.a;
//     f.b=x.b-y.b+z.b;
//     cout<<"D("<<f.a<<","<<f.b<<")"<<endl;
//     }

// }
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     float a, b, c, d, e;
//     while(scanf("%f %f %f %f",&a, &b, &c, &d)!=EOF)
//     {
//         e = sqrt((a - c) * ( a - c)+( b - d) * (b - d));
//         printf("%.2f\n", e);
//     }
//     return 0;
// }
// #include <math.h>
// #include <stdio.h>

// double dist(double x1, double y1, double x2, double y2){
// 	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
// }

// int main(void){
// 	double x1, y1;
// 	double x2, y2;
	

// 	scanf("%lf", &x1);
// 	printf("Y坐标:");
// 	scanf("%lf", &y1);
// 	printf("A (%lf, %lf)\n", x1, y1);
	
	
// 	puts("点B: ");
// 	printf("X坐标:");
// 	scanf("%lf", &x2); 
// 	printf("Y坐标:");
// 	scanf("%lf", &y2); 
// 	printf("B(%lf, %lf)\n", x2, y2);
	
// 	printf("两点之间的距离d = %f\n", dist(x1, y1, x2, y2));
	
// 	return 0;
// }
