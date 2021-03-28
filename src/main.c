#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main() {
    // // Day 4th. Lecture
    // int i;
    // for (i = 1; i <= 5; i++) {
    //     printf("%d", i);
    // }
    // printf("\n");

    // int j, k;
    // for (j = 1; j <= 2; j++) {
    //     for (k = 1; k <= 3; k++) {
    //         printf("%d+%d=%d ", j, k, j+k);
    //     }
    //     printf("\n");
    // }

    // int l = 0;
    // while (l <= 5) {
    //     printf("%d ", l);
    //     l++;
    // }
    // printf("\n");

    // int m = 0;
    // do {
    //     printf("%d ", m);
    //     m++;
    // } while (m <= 5);
    // printf("\n");

    // int n, num;
    // printf("回数を入力");
    // scanf("%d", &num);
    // printf("whileで実行\n");
    // n = 1;
    // while(n <= num) {
    //     printf("*");
    //     n++;
    // }
    // printf("\n");
    // printf("do-whileで実行\n");
    // n = 1;
    // do {
    //     printf("*");
    //     n++;
    // } while (n <= num);
    // printf("\n");

    // int number;
    // printf("負の値でループから抜けます。\n");
    // while (1) {
    //     printf("数値を入力\n");
    //     scanf("%d", &number);
    //     if (number < 0) {
    //         break;
    //     }
    // }
    // printf("終了\n");

    // Day 4th. Exercise
    srand((unsigned)time(NULL));

    printf("4-1. ");
    int j;
    j = rand() % 10 + 1;
    printf("数: %d", j);
    for (int i = 0; i < j; i++) {
        printf("■ ");
    }
    printf("\n");

    printf("4-2. ");
    int k, l;
    k = 0;
    l = rand() % 10 + 1;
    printf("数: %d", l);
    while (k < l) {
        printf("■ ");
        k++;
    }
    printf("\n");

    printf("4-3. ");
    int m, n;
    m = 0;
    n = rand() % 10 + 1;
    printf("数: %d", n);
    do {
        printf("■ ");
        m++;
    } while (m < n);
    printf("\n");

    printf("4-4. ");
    int a = 0;
    while (a <= 3) {
        printf("a = %d ", a);
        a++;
    }
    printf("\n");

    printf("4-5. ");
    for (int b = 0; b <= 3; b++) {
        printf("a = %d ", b);
    }
    printf("\n");

    printf("4-6. ");
    int c = 3;
    while (c >= 0) {
        printf("a = %d ", c);
        c--;
    }
    printf("\n");

    printf("4-7. ");
    for (int d = 3; d >= 0; d--) {
        printf("a = %d ", d);
    }
    printf("\n");

    printf("4-8. ");
    while (1) {
        int o;
        o = rand() % 10 + 1;
        printf("%d ", o);
        if (o == 10) {
            break;
        }
    }
    printf("終了します\n");

    printf("4-9. ");
    while (1) {
        int p;
        p = rand() % 100 + 1;
        printf("%d ", p);
        if (p % 10 == 0) {
            break;
        }
    }
    printf("終了します\n");

    printf("4-10. ");
    for (int q = 0; q < 5; q++) {
        printf("%d ", rand() % 100 + 1);
    }
    printf("\n");

    printf("4-11. ");
    int max = 0;
    for (int r = 0; r < 5; r++) {
        int s = rand() % 100 + 1;
        printf("%d ", s);
        if (s > max) {
            max = s;
        }
    }
    printf("最大値: %d\n", max);

    printf("4-12. ");
    int min = 100;
    for (int t = 0; t < 5; t++) {
        int u = rand() % 100 + 1;
        printf("%d ", u);
        if (u < min) {
            min = u;
        }
    }
    printf("最小値: %d\n", min);

    printf("4-13. ");
    int v = rand() % 10 + 1;
    if (v >= 5) {
        printf("%d: ", v);
        for (int tmp = 0; tmp < v; tmp++) {
            printf("★ ");
        }
        printf("\n");
    } else {
        printf("発生した数値: %d\n", v);
    }

    printf("4-14. ");
    int w = rand() % 10 + 1;
    if (w % 2 == 0) {
        printf("%d: ", w);
        for (int tmp2 = 0; tmp2 < w; tmp2++) {
            printf("★ ");
        }
        printf("\n");
    } else {
        printf("%d: ", w);
        for (int tmp2 = 0; tmp2 < w; tmp2++) {
            printf("☆ ");
        }
        printf("\n");
    }

    printf("4-15.\n");
    for (int tmp3 = 1; tmp3 <= 100; tmp3++) {
        printf("%d ", tmp3);
        if (tmp3 % 10 == 0) {
            printf("\n");
        }
    }

    printf("4-16.\n");
    for(int tmp4 = 1; tmp4 <= 9; tmp4++) {
        for (int tmp5 = 1; tmp5 <= 9; tmp5++) {
            printf("%d * %d = %d", tmp4, tmp5, tmp4 * tmp5);
            if (tmp5 == 9) {
                printf("\n");
            } else {
                printf(" | ");
            }
        }
    }

    printf("4-17.\n");
    for (int tmp6 = 0; tmp6 < 10; tmp6++) {
        for (int tmp7 = 0; tmp7 < 10; tmp7++) {
            if (tmp6 >= tmp7) {
                printf("■ ");
            } else {
                printf("□ ");
            }
            if (tmp7 == 9) {
                printf("\n");
            }
        }
    }

    printf("4-18.\n");
    for (int tmp8 = 0; tmp8 < 10; tmp8++) {
        for (int tmp9 = 0; tmp9 < 10; tmp9++) {
            if (tmp8 == tmp9) {
                printf("□ ");
            } else {
                printf("■ ");
            }
            if (tmp9 == 9) {
                printf("\n");
            }
        }
    }
}
