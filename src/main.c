#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main() {
    // Day 3rd. Lecture
    // int a;
    // printf("数値を入力: ");
    // scanf("%d", &a);
    // if (a > 0) {
    //     printf("入力した値は、正の数です。\n");
    // } else {
    //     printf("入力した値は、正の数ではありません。\n");
    // }

    // int num;
    // printf("1-3の値を入力してください: ");
    // scanf("%d", &num);
    // if (num == 1) {
    //     printf("one\n");
    // } else if(num == 2) {
    //     printf("two\n");
    // } else if(num == 3) {
    //     printf("three\n");
    // } else {
    //     printf("不適切な値です。\n");
    // }

    // int dice;
    // printf("1から6の数値を入力してください: ");
    // scanf("%d", &dice);
    // if (1 <= dice && dice <= 6) {
    //     if (dice == 2 || dice == 4 || dice == 6) {
    //         printf("丁です\n");
    //     } else {
    //         printf("半です\n");
    //     }
    // } else {
    //     printf("範囲外の数値です。\n");
    // }

    // int num2;
    // printf("1-3の値を入力してください");
    // scanf("%d", &num2);
    // switch(num2) {
    //     case 1:
    //         printf("one\n");
    //         break;
    //     case 2:
    //         printf("two\n");
    //         break;
    //     case 3:
    //         printf("three\n");
    //         break;
    //     default:
    //         printf("不適切な値です。\n");
    //         break;
    // }

    // Day 3rd. Exercise
    printf("3-1. ");
    int a;
    printf("数値を入力してください: ");
    scanf("%d", &a);
    if (a >= 5) {
        printf("5以上です\n");
    }

    printf("3-2. ");
    int b;
    printf("数値を入力してください: ");
    scanf("%d", &b);
    if (b != 1) {
        printf("1ではありません\n");
    }

    printf("3-3. ");
    int c;
    printf("数値を入力してください: ");
    scanf("%d", &c);
    if (c < 50) {
        printf("50未満です\n");
    }

    printf("3-4. ");
    int d;
    printf("数値を入力してください: ");
    scanf("%d", &d);
    if (d <= 10 || d >= 90) {
        printf("10以下か90以上の値です\n");
    }

    printf("3-5. ");
    int e;
    printf("数値を入力してください: ");
    scanf("%d", &e);
    if (e >= 20 && e < 80) {
        printf("20以上80未満です \n");
    }

    printf("3-6. ");
    int n;
    srand((unsigned)time(NULL));
    n = rand() % 6 + 1;
    printf("数値: %d\n", n);
    if (n >= 3) {
        printf("3以上です\n");
    }

    printf("3-7. ");
    int m;
    srand((unsigned)time(NULL));
    m = rand() % 10 + 1;
    printf("数値: %d\n", m);
    if (m >= 5) {
        printf("5以上です\n");
    } else {
        printf("5未満です\n");
    }

    printf("3-8. ");
    int o;
    srand((unsigned)time(NULL));
    o = rand() % 10 + 1;
    printf("数値: %d\n", o);
    if (o != 1) {
        printf("1ではありません\n");
    } else {
        printf("1です\n");
    }

    printf("3-9. ");
    int p;
    srand((unsigned)time(NULL));
    p = rand() % 100 + 1;
    printf("数値: %d\n", p);
    if (p < 50) {
        printf("50未満です\n");
    } else {
        printf("50以上です\n");
    }

    printf("3-10. ");
    int q;
    srand((unsigned)time(NULL));
    q = rand() % 100 + 1;
    printf("数値: %d\n", q);
    if (q <= 10 && q >= 90) {
        printf("10以下か90以上です\n");
    } else {
        printf("10より大きく90未満です\n");
    }

    printf("3-11. ");
    int r;
    srand((unsigned)time(NULL));
    r = rand() % 100 + 1;
    printf("数値: %d\n", r);
    if (r >= 20 && r < 80) {
        printf("20以上80未満です\n");
    } else {
        printf("20未満か、80以上です\n");
    }

    printf("3-12. ");
    int s;
    srand((unsigned)time(NULL));
    s = rand() % 10 - 10;
    printf("数値: %d\n", s);
    if (s < 0) {
        printf("負の値です\n");
    } else if (s > 0) {
        printf("正の値です\n");
    } else {
        printf("0です\n");
    }

    printf("3-13. ");
    int t;
    srand((unsigned)time(NULL));
    t = rand() % 3 + 1;
    printf("数値: %d\n", t);
    switch (t) {
        case 1:
            printf("グー\n");
            break;
        case 2:
            printf("パー\n");
            break;
        case 3:
            printf("チョキ\n");
            break;
    }

    printf("3-14. ");
    int u, v;
    srand((unsigned)time(NULL));
    u = rand() % 10 + 1;
    v = rand() % 10 + 1;
    printf("a: %d ", u);
    printf("b: %d\n", v);
    if (u > v) {
        printf("aの方が大きいです\n");
    } else if (u < v) {
        printf("bの方が大きいです\n");
    } else {
        printf("等しいです\n");
    }

    printf("3-15. ");
    int w;
    srand((unsigned)time(NULL));
    w = rand() % 100 + 1;
    printf("点数: %d\n", w);
    if (w >= 80) {
        printf("優\n");
    } else if (w < 80 && w >= 70) {
        printf("良\n");
    } else if (w < 70 && w >= 60) {
        printf("可\n");
    } else {
        printf("不可\n");
    }

    printf("3-16. ");
    int x;
    srand((unsigned)time(NULL));
    x = rand() % 100 + 1;
    printf("%d\n", x);
    if (x % 2 == 0 && x % 3 == 0) {
        printf("2と3の公倍数です\n");
    } else if (x % 2 == 0) {
        printf("2の倍数です\n");
    } else if (x % 3 == 0) {
        printf("3の倍数です\n");
    }

    printf("3-17. ");
    int y;
    srand((unsigned)time(NULL));
    y = rand() % 100 + 1;
    printf("%d\n", y);
    if (y <= 50 && y % 2 == 0) {
        printf("50以下の偶数です\n");
    } else if (y <= 50) {
        printf("50以下です\n");
    } else if (y % 2 == 0) {
        printf("偶数です\n");
    }

    printf("3-18. ");
    int z;
    srand((unsigned)time(NULL));
    z = rand() % 35 - 10;
    printf("摂氏%d度\n", z);
    if (z >= 30) {
        printf("真夏日です\n");
    } else if (z >= 25 && z < 30) {
        printf("夏日です\n");
    } else if (z < 0) {
        printf("真冬日です\n");
    }

    printf("3-19. ");
    int year;
    printf("西暦を入力してください: ");
    scanf("%d", &year);
    if (year % 400 == 0) {
        printf("閏年です\n");
    } else if (year % 4 == 0 && year % 100 != 0) {
        printf("閏年です\n");
    } else {
        printf("閏年ではありません\n");
    }
}
