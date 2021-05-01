// // ex.4-1
// #include <stdio.h>
// #include <stdlib.h>

// void main() {
//     // サイズSIZEの配列を用意
//     int nums[] = { 1, 2, 3, 4, 5 };
//     int *p = NULL;
//     int i;
//     p = nums; // pにnumsのアドレスを入力
//     for (i = 0; i < 5; i++) {
//         printf("%d ", *p + 4 - i);
//         // p++;
//     }
//     printf("\n");
// }

// // ex.4-2
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// void show(int*);
// int twice(int*);

// void main() {
//     srand((unsigned)time(NULL));
//     int a[5];
    
//     for (int i = 0; i < 5; i++) {
//         a[i] = rand() % 101;
//     }

//     printf("発生した乱数:\n");
//     show(&a[0]);
//     twice(&a[0]);
//     printf("2倍した値:\n");
//     show(&a[0]);
// }

// void show(int *num) {
//     for (int i = 0; i < 5; i++) {
//         printf("%d ", *(num + i));
//     }
//     printf("\n");
// }

// int twice(int *num) {
//     for (int i = 0; i < 5; i++) {
//         *(num + i) = *(num + i) * 2;
//     }
// }

// // ex4-3.
// #include <stdio.h>
// #include <malloc.h>

// void main() {
//     // 数値配列代入用のポインタ変数
//     int *array = NULL;
//     int i;
//     // 長さ10の配列の生成(mallocを使用)
//     array = (int*)malloc(sizeof(int)*10);
//     for (i = 0; i < 10; i++) {
//         array[i] = i;
//     }
//     // 値の表示
//     for (i = 0; i < 10; i++) {
//         printf("%d ", array[i]);
//     }
//     printf("\n");
//     // 生成したメモリの開放
//     free(array);
// }

// ex.4-4
#include <stdio.h>
#include <malloc.h>

void main() {
    // 数値配列代入用のポインタ変数
    double *a = NULL;
    int i;
    // メモリの生成
    a = (double*)malloc(sizeof(double)*6);
    for (i = 0; i < 6; i++) {
        a[i] = 0.1 * i;
    }
    // 結果の表示
    for (i = 0; i < 6; i++) {
        printf("%f ", a[i]);
    }
    printf("\n");
    // メモリの開放
    free(a);
}
