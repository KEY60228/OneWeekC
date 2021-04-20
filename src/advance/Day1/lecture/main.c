// // ex 1-1.
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// void main() {
//     int a, b;
//     // 乱数の初期化
//     srand((unsigned)time(NULL));
//     // 1から10までの乱数を発生させる
//     a = rand() % 10 + 1;
//     b = rand() % 10 + 1;
//     // 計算結果を出力
//     printf("%d + %d = %d\n", a, b, a + b);
// }

// // ex 1-2.
// #include <stdio.h>
// #include <math.h>
// #define PI 3.14

// void main() {
//     int angle;
//     double rad;
//     printf("角度を入力してください(0-360): ");
//     scanf("%d", &angle);
//     // 角度をラジアンに変換
//     rad = PI * (double)angle / 180.0;
//     // 三角関数での計算
//     printf("sin(%d) = %f\n", angle, sin(rad));
//     printf("cos(%d) = %f\n", angle, cos(rad));
//     printf("tan(%d) = %f\n", angle, tan(rad));
// }

// // ex 1-3.
// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// void main() {
//     int n = -2;
//     double d1 = -2.5, d2 = 4.0;
//     printf("%dの絶対値は%d\n", n, abs(n));
//     printf("%fの絶対値は%f\n", d1, fabs(d1));
//     printf("%fの2乗は%f\n", d2, pow(d2, 2));
//     printf("%fの平方根は%f\n", d2, sqrt(d2));
// }

#include <stdio.h>
#include <stdlib.h>

void main() {
    // 16進数
    unsigned char i = 0xf; // 2進数: 00001111
    unsigned char j = 0xff; // 2進数: 11111111
    printf("%x << 1 = %x\n", i, i << 1); // 1ビット左シフト 2進数: 00011110 = 0x1e0
    printf("%x >> 1 = %x\n", i, i >> 1); // 1ビット右シフト 2進数: 00000111 = 0x7
    printf("%x | %x = %x\n", i, j, i | j); // OR演算 2進数: 11111111 = 0xff
    printf("%x & %x = %x\n", i, j, i & j); // AND演算 2進数: 00001111 = 0xf
    printf("~%x = %x\n", i, (unsigned char)~i); // NOT演算 2進数: 11110000 = 0xf0
}
