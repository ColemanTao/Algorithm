// #include<iostream>
// #include<cstdio>
// using namespace std;

// bool judge(int a, int b, int c, int d) {
//     int count = 0;
//     if(b > c) {
//         count++;
//     }
//     if (d > a) {
//         count++;
//     }
//     if (c + d > a + b) {
//         count++;
//     }
//     if (a % 2 == 0) {
//         count++;
//     }
//     if (count == 4) {
//         return true;
//     }
//     else {
//         return false;
//     }
// }
// int main() {
//     int a, b, c, d;
//     cin >> a >> b >> c >> d;
//     if (judge(a, b, c, d)) {
//         printf("Valores aceitos");
//     }
//     else {
//         printf("Valores nao aceitos");
//     }
//     return 0;
// }
// #include<iostream>

// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     switch(n) {
//         case 61:
//         cout << "Brasilia" << endl;
//         break;
//         case 71:
//         cout << "Salvador" << endl;
//         break;
//         case 11:
//         cout << "Sao paulo" << endl;
//         break;
//         case 21:
//         cout << "Rio de Janerio" << endl;
//         break;
//         case 32:
//         cout << "Juiz de Fora" << endl;
//         break;
//         case 19:
//         cout << "Campians" << endl;
//         break;
//         case 27:
//         cout << "Vitoria" << endl;
//         break;
//         case 31:
//         cout << "Belo Horizonte" << endl;
//         default:
//         cout << "DDD nao cadastrado" << endl;
//     }
//     return 0;
// }
// #include<iostream>
// #include<cstdio>
// #include<cmath>
// using namespace std;

// int main() {
//     int a, b, c, d, sum;
//     cin >> a >> b >> c >> d;
//     sum = fabs((a * 60 + b) - (c * 60 + d));
//     int hour = sum / 60;
//     int min = sum % 60;
//     printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", hour, min);
//     return 0;
// }
// #include<iostream>
// #include<cstdio>

// using namespace std;

// int main() {
//     double salary = 0;
//     cin >> salary;
//     if ( 0 <= salary && salary <= 2000) {
//         printf("Isento");
//     }
//     else if (2000.1 <= salary && salary <= 3000) {
//         printf("R$ %.2lf", 0.08 * salary);
//     }
//     else if (3000.1 <= salary && salary <= 4500) {
//         printf("R$ %.2lf", salary * 0.18);
//     }
//     else {
//         printf("R$ %.2lf", salary * 0.28);
//     }
//     return 0;
// }
// #include<iostream>

// using namespace std;

// int main() {
//     int a, b, c;
//     cin >> a >> b >> c;
//     if (a >= b + c) {
//         cout << "NAO FORMA TRIANGULO" << endl;
//     }
//     if (a == b || b == c || a == c) {
//         if (a == b && b == c) {
//             cout << "TRIANGULO EQUILATERO" << endl;
//         }
//         else {
//             cout << "TRIANGULO ISOSCELES" << endl;
//         }
//     }
//     a = a * a, b = b * b, c = c * c;
//     if (a == b + c) {
//         cout << "TRIANGULO RETANGULO" << endl;
//     }
//     if (a > b + c) {
//         cout << "TRIANGULO OBTUSANGULO" << endl;
//     }
//     if (a < b + c) {
//         cout << "TRIANGULO EQUILATERO" << endl;
//     }
//     return 0;
// }
// #include<iostream>

// using namespace std;

// int main() {
//     int a, b, c;
//     cin >> a >> b >> c;
//     if (b + c <= a) {
//         cout << "NAO FORMA TRIANGULO" << endl;
//     }
//     if (a == b || b == c || a == c) {
//         if (a == b && b == c) {
//             cout << "TRIANGULO EQUILATERO" << endl;
//         }
//         else {
//             cout << "TRIANGULO ISOSCELES" << endl;
//         }
//     }
//     a = a * a, b = b * b, c = c * c;
//     if (a == b + c) {
//         cout << "TRIANGULO RETANGULO" << endl;
//     }
//     if (a > b + c) {
//         cout << "TRIANGULO OBTUSANGULO" << endl;
//     }
//     if (a < b + c) {
//         cout << "TRIANGULO EQUILATERO" << endl;
//     }
//     return 0;
// }

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main() {
    double a, b, c;
    double x1, x2;
    cin >> a >> b >> c;
    double d = b*b-4*a*c;
    if ((d) < 0 || a == 0) {
        cout << "Impossivel calcular";
    }   
    else {
        x1 = (-b + sqrt(d))/(2 * a);
        x2 = (-b - sqrt(d))/(2 * a);
        printf("R1 = %.5lf\nR2 = %.5lf", x1, x2);
    }
    return 0;
}