#include "phoenixLib.h"
#include "Lib1.h"

static int a = 12, b = 8, c = 34, d = 123;

int event1_p2();
int event1_p3();

int event1_p4();

int event1_p5();

int main(){
    translateOutput(); // Смена кодировки вывода консоли.
    printf(" A: %d; B: %d; C: %o; D: %o; Event1_p1\n", a, b, c, d); // Вывод исходных данных

    a += b + 1 + c + 1;
    a %= d;
    b /= 6;
    c += b - 1 + a;
    a++;
    d = (b >> 1) & (c >> 1); // Арифметические преобразования

   printf(" A: %d; B: %d; C: %o; D: %o; Event1_p1\n", a, b, c, d); // Вывод преобразований

   a = 0; b = 0; c = 0; d = 0;
   event1_p2(); // Задача 2.
   event1_p3(); // Задача 3.
   event1_p4(); // Задача 4.
   event1_p5(); // Задача 5.
   return 0;
}



int event1_p2(){
        int A = 512, B = 1024, C = 2048, D = 4096; // Локальные переменные.
        A += B + 1 + C + 1;
        A %= D;
        B /= 6;
        C += B - 1 + A;
        A++;
        D = (B >> 1) & (C >> 1); // Арифметические операции.

        printf(" A: %d; B: %d; C: %o; D: %o; Event1_p2\n", A, B, C, D); // Вывод

        return 0;
}

int event1_p3(){
    int A, B, C, D;
    printf("Введите значения переменных A, B, C, D:");
    scanf("%d %d %d %d", &A, &B, &C, &D); // Считывание значений из консоли, которые мы вводим.

    A += B + 1 + C + 1;
    A %= D;
    B /= 6;
    C += B - 1 + A;
    A++;
    D = (B >> 1) & (C >> 1); // Арифметические операции.

    printf(" A: %d; B: %d; C: %o; D: %o; Event1_p3\n", A, B, C, D); // Вывод

    return 0;
}
int event1_p4(){
    printf("Введите значения переменных A, B, C, D:");
    scanf("%d %d %d %d", &A, &B, &C, &D); // Считывание значений из консоли, которые мы вводим.

    A += B + 1 + C + 1;
    A %= D;
    B /= 6;
    C += B - 1 + A;
    A++;
    D = (B >> 1) & (C >> 1); // Арифметические операции.

    printf(" A: %d; B: %d; C: %o; D: %o; Event1_p4\n", A, B, C, D); // Вывод

    return 0;

}
int event1_p5(){
    int mass[]={12,8,34,123};
    printf(" mass[0]: %d; mass[1]: %d; mass[2]: %o; mass[3]: %o; Event1_p5\n", mass[0], mass[1], mass[2], mass[3]); // Вывод исходных данных
    mass[0] += mass[1] + 1 + mass[2] + 1;
    mass[0] %= mass[3];
    mass[1] /= 6;
    mass[2] += mass[1] - 1 + mass[0];
    mass[0]++;
    mass[3] = (mass[1] >> 1) & (mass[2] >> 1); // Арифметические операции.

    printf(" mass[0]: %d; mass[1] %d; mass[2]: %o; mass[3]: %o; Event1_p5\n", mass[0], mass[1], mass[2], mass[3]); // Вывод

}