// // ex.1-1
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// void main() {
//     srand((unsigned)time(NULL));
//     for (int i = 0; i < 5; i++) {
//         int a = rand() % 10 + 1;
//         printf("%d ", a);
//     }
//     printf("\n");
// }

// // ex.1-2
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// void main() {
//     srand((unsigned)time(NULL));
//     int min = 10, max = 0;
//     for (int i = 0; i < 5; i++) {
//         int a = rand() % 10 + 1;
//         if (a < min) {
//             min = a;
//         }
//         if (a > max) {
//             max = a;
//         }
//         printf("%d ", a);
//     }
//     printf("\n");
//     printf("最大値: %d\n", max);
//     printf("最小値: %d\n", min);
// }

// // ex.1-3
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// void main() {
//     srand((unsigned)time(NULL));
//     int a[5];
//     int n1 = 0, n2 = 0, n3 = 0;

//     for (int i = 0; i < 5; i++) {
//         a[i] = rand() % 100;
//         if (a[i] >= 20 && a[i] <= 50) {
//             n1++;
//         }
//         if (a[i] > 80) {
//             n2++;
//         }
//         if (a[i] >= 0 && a[i] < 10) {
//             n3++;
//         }
//         printf("a[%d] = %d ", i, a[i]);
//     }
//     printf("\n");
//     printf("20以上50以下の数: %d個\n", n1);
//     printf("80より大きい数: %d個\n", n2);
//     printf("0以上10未満の数: %d個\n", n3);
// }

// // ex.1-4
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// void main() {
//     srand((unsigned)time(NULL));
//     for (int i = 0; i < 6; i++) {
//         int a = rand() % 10 + 1;
//         int b = rand() % 10 + 1;
//         printf("%d + %d = %d\n", a, b, a + b);
//     }
// }

// // ex.2-1
// #include <stdio.h>
// #include <math.h>

// void main() {
//     double x1, y1, x2, y2;
//     scanf("1つ目のベクトルのX: %f", &x1);
//     scanf("1つ目のベクトルのY: %f", &y1);
//     scanf("2つ目のベクトルのX: %f", &x2);
//     scanf("2つ目のベクトルのY: %f", &y2);
//     // ベクトルの計算式わからん
// }

// // ex.2-2
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// #include <math.h>

// void main() {
//     srand((unsigned)time(NULL));
//     for (int i = 0; i < 4; i++) {
//         int a = rand() % 20 - 10;
//         printf("%dつ目の数値: %d 絶対値: %d\n", i + 1, a, abs(a));
//     }
// }

// // ex.3-1
// #include <stdio.h>
// #include <stdlib.h>

// void main() {
//     char str[256];
//     printf("Input words: ");
//     scanf("%s", str);
//     for (int i = 0; str[i]; i++) {
//         printf("%c", str[i] | 0x20);
//     }
//     printf("\n");
// }

// // ex.3-2
// #include <stdio.h>
// #include <stdlib.h>

// void main() {
//     char str[256];
//     printf("Input words: ");
//     scanf("%s", str);
//     for (int i = 0; str[i]; i++) {
//         printf("%c", str[i] & 0xDF);
//     }
//     printf("\n");
// }

// ex.3-3
#include <stdio.h>
#include <stdlib.h>

void main() {
    int n;
    printf("Input Number(0-255): ");
    scanf("%d", &n);
    for (int i = 0; i < 8; i++) {
        unsigned int num = n & 0x80;
        if (num == 0) {
            printf("0");
        } else {
            printf("1");
        }
        n = n << 1;
    }
    printf("\n");
}
