// // ex.3-1
// #include <stdio.h>

// #define SIZE 5

// void main() {
//     // サイズSIZEの配列を用意する
//     int ar1[SIZE];
//     char ar2[SIZE];
//     int i;
//     int *p1 = NULL;
//     char *p2 = NULL;

//     // 値を代入
//     for (i = 0; i < SIZE; i++) {
//         ar1[i] = i;
//         ar2[i] = 'A' + i;
//     }

//     // ポインタにアドレスを代入
//     p1 = &ar1[0];
//     p2 = &ar2[0];

//     // 値を出力
//     for (i = 0; i < SIZE; i++) {
//         printf("ar1[%d] = %d *(p1 + %d) = %d ", i, ar1[i], i, *(p1 + i));
//         printf("ar2[%d] = %c *(p2 + %d) = %c\n", i, ar2[i], i, *(p2 + i));
//     }
// }

// // ex.3-2
// #include <stdio.h>

// void main() {
//     double d[3] = { 0.2, 0.4, 0.6 };
//     double *p1 = NULL, *p2 = NULL;
//     int i;
//     p1 = d;
//     p2 = d;
//     for (i = 0; i < 3; i++) {
//         printf("%f %f %f\n", *(d + i), p1[i], *p2);
//         p2++;
//     }
// }

// ex.3-3
#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

void main() {
    int *p1 = NULL;
    double *p2 = NULL;
    int i;

    p1 = (int*)malloc(sizeof(int)*SIZE);
    p2 = (double*)malloc(sizeof(double)*SIZE);

    for (i = 0; i < SIZE; i++) {
        p1[i] = i;
        p2[i] = i / 10.0;
    }

    for (i = 0; i < SIZE; i++) {
        printf("p1[%d] = %d p2[%d] = %f\n", i, p1[i], i, p2[i]);
    }

    free(p1);
    free(p2);
}
