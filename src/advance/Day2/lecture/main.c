// // ex2-1
// #include <stdio.h>

// void main() {
//     int a = 100;
//     double b = 123.4;
//     float c = 123.4f;
//     char d = 'a';
//     printf("aの値は%d、大きさは%dbyte、アドレスは0x%x\n", a, sizeof(int), &a);
//     printf("bの値は%f、大きさは%dbyte、アドレスは0x%x\n", b, sizeof(double), &b);
//     printf("cの値は%f、大きさは%dbyte、アドレスは0x%x\n", c, sizeof(float), &c);
//     printf("dの値は%c、大きさは%dbyte、アドレスは0x%x\n", d, sizeof(char), &d);
// }

// // ex2-2
// #include <stdio.h>

// void show(int, int, int);

// void main() {
//     int a = 100;
//     int b = 200;
//     int *p = NULL; // 整数型ポインタ変数
//     p = &a; // pにaのアドレスを代入
//     show(a, b, *p);
//     *p = 300; // *pに値を代入
//     show (a, b, *p);
//     p = &b; // *pにbのアドレスを代入
//     show(a, b, *p);
//     *p = 400; // *pに値を代入
//     show(a, b, *p);
// }

// void show(int n1, int n2, int n3) {
//     printf("a = %d b = %d *p = %d\n", n1, n2, n3);
// }

// // ex2-3
// #include <stdio.h>

// // 変数の値の入れ替えを行う
// void swap(int*, int*);

// void main() {
//     int a = 1, b = 2;
//     printf("a = %d b = %d\n", a, b);
//     swap(&a, &b);
//     printf("a = %d b = %d\n", a, b);
// }

// void swap(int* num1, int* num2) {
//     int temp = *num1;
//     *num1 = *num2;
//     *num2 = temp;
// }

// ex2-4
#include <stdio.h>

void main() {
    int *p = NULL;
    *p = 1; // Doesn't work because it doesn't point address
}