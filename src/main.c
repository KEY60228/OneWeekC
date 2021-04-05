#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// グローバル変数
// int global = 10;

// プロトタイプ宣言
// double avg(double, double);
// int max(int, int);
// void show(int);
// void line();
// void func1(double, int);
// void func2();

// double avg(double l, double m) {
//     double r = (l + m) / 2.0;
//     return r;
// }

// void main() {
    // Day 6th. Lecture
    // double d1, d2, d3;
    // double a = 1.2, b = 3.4, c = 2.7;
    // d1 = (a + b) / 2.0;
    // d2 = (4.1 + 5.7) / 2.0;
    // d3 = (c + 2.8) / 2.0;
    // printf("d1 = %f, d2 = %f, d3 = %f\n", d1, d2, d3);

    // double d1, d2, d3;
    // double a = 1.2, b = 3.4, c = 2.7;
    // d1 = avg(a, b);
    // d2 = avg(4.1, 5.7);
    // d3 = avg(c, 2.8);
    // printf("d1 = %f, d2 = %f, d3 = %f\n", d1, d2, d3);

    // int n1 = 4, n2 = 5;
    // line();
    // show(n1);
    // show(n2);
    // printf("二つの数字のうち、大きい数は%dです。\n", max(n1, n2));
    // line();

    // double a = 123.41;
    // int b = 100;
    // printf("main処理中\n");
    // printf("global=%d\n", global);
    // printf("a=%f b=%d\n", a, b);
    // printf("******************\n");
    // func1(3.1, 4);
    // func2();
// }

// int max(int a, int b) {
//     if (a > b) {
//         return a;
//     }
//     return b;
// }

// void show(int n) {
//     printf("数値: %d\n");
//     return;
// }

// void line() {
//     printf("****************\n");
// }

// void func1(double a, int b) {
//     printf("func1処理中\n");
//     printf("global=%d\n", global);
//     printf("a=%f b=%d\n", a, b);
//     printf("*****************\n");
// }

// void func2() {
//     double a = -4.1;
//     int b = 2;
//     printf("func2処理中\n");
//     printf("global=%d\n", global);
//     printf("a=%f b=%d\n", a, b);
//     printf("*****************\n");
// }

// Day 6th. Exercise
int add(int, int);
int sub(int, int);
int mul(int, int, int);
double triangle(double, double);
void numJudge(int);
int max(int, int);
void stars(int);
double circumference(double);
double area(double);
int get_absolute(int);
void square(int, int);
int gcd(int, int);
int lcm(int, int);

void main() {
    printf("6-1.\n");
    int a, b;
    int result;
    printf("a="); 
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    result = add(a, b);
    printf("%d + %d = %d\n", a, b, result);
    printf("%d - %d = %d\n", a, b, sub(a, b));

    printf("6-2.\n");
    int c, d, e;
    int result2;
    printf("c=");
    scanf("%d", &c);
    printf("d=");
    scanf("%d", &d);
    printf("e=");
    scanf("%d", &e);
    result2 = mul(c, d, e);
    printf("%d * %d * %d = %d\n", c, d, e, result2);
    
    printf("6-3.\n");
    double teihen, takasa;
    double menseki;
    printf("底辺=");
    scanf("%lf", &teihen);
    printf("高さ=");
    scanf("%lf", &takasa);
    menseki = triangle(teihen, takasa);
    printf("三角形の面積: %lf\n", menseki);

    printf("6-4.\n");
    int f;
    printf("整数値を入力してください: ");
    scanf("%d", &f);
    numJudge(f);

    printf("6-5.\n");
    int g, h;
    printf("1つ目の値を入力してください: ");
    scanf("%d", &g);
    printf("2つ目の値を入力してください: ");
    scanf("%d", &h);
    printf("%dと%dのうち、大きい値は%dです\n", g, h, max(g, h));

    printf("6-6.\n");
    int i;
    printf("表示する回数を入力してください: ");
    scanf("%d", &i);
    stars(i);

    printf("6-7.\n");
    double j;
    printf("円の半径を入力してください: ");
    scanf("%lf", &j);
    printf("円周: %lf\n", circumference(j));
    printf("円の面積: %lf\n", area(j));

    printf("6-8.\n");
    int k;
    printf("整数値を入力してください: ");
    scanf("%d", &k);
    printf("絶対値: %d\n", get_absolute(k));

    printf("6-9.\n");
    int l, m;
    printf("たて: ");
    scanf("%d", &l);
    printf("よこ: ");
    scanf("%d", &m);
    square(l, m);

    printf("6-10.\n");
    int n, o;
    printf("1つの目の値を入力してください: ");
    scanf("%d", &n);
    printf("2つ目の値を入力してください: ");
    scanf("%d", &o);
    printf("2つの数の最大公約数は、%dです\n", gcd(n, o));
    printf("2つの数の最小公倍数は、%dです\n", lcm(n, o));
}

int add(int n1, int n2) {
    return n1 + n2;
}

int sub(int n1, int n2) {
    return n1 - n2;
}

int mul(int n1, int n2, int n3) {
    return n1 * n2 * n3;
}

double triangle(double teihen, double takasa) {
    return (teihen * takasa) / 2.0;
}

void numJudge(int n1) {
    if (n1 == 0) {
        printf("0です\n");
    } else if (n1 % 2 == 0) {
        printf("偶数です\n");
    } else {
        printf("奇数です\n");
    }
}

int max(int n1, int n2) {
    if (n1 > n2) {
        return n1;
    } else {
        return n2;
    }
}

void stars(int n1) {
    if (n1 > 0) {
        for (int i = 0; i < n1; i++) {
            printf("*");
        }
        printf("\n");
    } else {
        printf("0より大きい値を入力してください\n");
    }
}

double circumference(double n1) {
    return n1 * 2.0 * 3.14;
}

double area(double n1) {
    return n1 * n1 * 3.14;
}

int get_absolute(int n1) {
    if (n1 >= 0) {
        return n1;
    } else {
        return -n1;
    }
}

void square(int height, int width) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            printf("■");
        }
        printf("\n");
    }
}

int gcd(int n1, int n2) {
    while (n1 != n2) {
        if (n1 > n2) {
            n1 = n1 - n2;
        } else {
            n2 = n2 - n1;
        }
    }
    return n1;
}

int lcm(int n1, int n2) {
    return n1 * n2 / gcd(n1, n2);
}