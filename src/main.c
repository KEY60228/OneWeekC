#include <stdio.h>

void main() {
    // Day 2nd. Lecture
    // 各種演算
    printf("%d + %d = %d\n", 5, 2, 5 + 2);
    printf("%d - %d = %d\n", 5, 2, 5 - 2);
    printf("%d * %d = %d\n", 5, 2, 5 * 2);
    printf("%d / %d = %d 余り %d \n", 5, 2, 5 / 2, 5 % 2);

    // 変数を用いた計算
    int a;
    int b = 3;
    int add, sub;
    double avg;
    a = 6;
    add = a + b;
    sub = a - b;
    avg = (a + b) / 2.0;
    printf("%d + %d = %d\n", a, b ,add);
    printf("%d - %d = %d\n", a, b, sub);
    printf("%dと%dの平均値:%f\n", a, b, avg);

    // 代入演算子を用いた計算
    // 普通の演算
    int a1 = 2, b1 = 2, c1 = 2, d1 = 2;
    int a2 = 2, b2 = 2, c2 = 2, d2 = 2;
    a1 = a1 + 1;
    b1 = b1 - 1;
    c1 = c1 * 2;
    d1 = d1 / 2;
    // 代入演算
    a2 += 1;
    b2 -= 1;
    c2 *= 2;
    d2 /= 2;
    printf("a1 = %d b1 = %d c1 = %d d1 = %d\n", a1, b1, c1, d1);
    printf("a2 = %d b2 = %d c2 = %d d2 = %d\n", a2, b2, c2, d2);

    // キャストとデータの型変換
    int e1, e2, h1, h2;
    double i1, i2, j1, j2;
    h1 = 3;
    h2 = 3;
    i1 = 1.23;
    i2 = 1.23;
    e1 = i1;
    e2 = (int)i2;
    j1 = h1;
    j2 = (double)h2;
    printf("i1 = %f i2 = %f\n", i1, i2);
    printf("e1 = %d e2 = %d\n", e1, e2);
    printf("h1 = %d h2 = %d\n", h1, h2);
    printf("j1 = %d j2 = %d\n", j1, j2);

    // Day 2nd. Exercise
    int k, l;
    printf("k = ");
    scanf("%d", &k);
    printf("l = ");
    scanf("%d", &l);
    printf("k + l = %d\n", k + l);
    printf("k - l = %d\n", k - l);
    printf("k * l = %d\n", k * l);
    printf("k / l = %d\n", k / l);
    printf("k % l = %d\n", k % l);

    int m, n;
    printf("長方形の幅: ");
    scanf("%d", &m);
    printf("長方形の高さ: ");
    scanf("%d", &n);
    printf("長方形の面積は、%dm2です。\n", m * n);
}
