#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main() {
    // Day 5th. Lecture
    // double one, two, three;
    // double sum, avg;
    // one = 1.2, two = 3.7, three = 4.1;
    // printf("%f %f %f\n", one, two, three);
    // sum = one + two + three;
    // avg = sum / 3.0;
    // printf("合計値: %f\n", sum);
    // printf("平均値: %f\n", avg);

    // double d[3];
    // double sum, avg;
    // int i;
    // d[0] = 1.2;
    // d[1] = 3.7;
    // d[2] = 4.1;
    // sum = 0.0;
    // for (i = 0; i < 3; i++) {
    //     printf("%f ", d[i]);
    //     sum += d[i];
    // }
    // printf("\n");
    // avg = sum / 3.0;
    // printf("合計値: %f\n", sum);
    // printf("平均値: %f\n", avg);

    // int n[] = { 5, 4, 3, 2, 1 };
    // int i;
    // for (i = 0; i < 5; i++) {
    //     printf("n[%d] = %d ", i, n[i]);
    // }
    // printf("\n");

    // char s1[4] = { 'a', 'b', 'c', '\0'};
    // char s2[] = "HelloWorld!";
    // char s3[10];
    // printf("文字列を入力してください: ");
    // scanf("%s", s3);
    // printf("s1 = %s\n", s1);
    // printf("s2 = %s\n", s2);
    // printf("s3 = %s\n", s3);

    // int a[3][4];
    // int m, n;
    // for (m = 0; m < 3; m++) {
    //     for (n = 0; n < 4; n++) {
    //         a[m][n] = m + n;
    //     }
    // }
    // for (m = 0; m < 3; m++) {
    //     for (n = 0; n < 4; n++) {
    //         printf("%d ", a[m][n]);
    //     }
    //     printf("\n");
    // }

    // Day 5th. Exercise
    srand((unsigned)time(NULL));

    printf("5-1. ");
    int a[6], tmp;
    for (tmp = 0; tmp < 6; tmp++) {
        a[tmp] = rand() % 10 + 1;
    }
    for (tmp = 0; tmp < 6; tmp++) {
        printf("a[%d] = %d ", tmp, a[tmp]);
    }
    printf("\n");

    printf("5-2. ");
    // double b[] = { 1.2, -1.3, 5.2, 4.8 };
    double b[4];
    b[0] = 1.2;
    b[1] = -1.3;
    b[2] = 5.2;
    b[3] = 4.8;
    int tmp2;
    for (tmp2 = 0; tmp2 < 4; tmp2++) {
        printf("b[%d] = %g ", tmp2, b[tmp2]);
    }
    printf("\n");

    printf("5-3.\n");
    int c[10], tmp3;
    int tmp4 = 0, tmp5 = 0;
    char d[10], e[10];
    for (tmp3 = 0; tmp3 < 10; tmp3++) {
        c[tmp3] = rand() % 10 + 1;
    }
    for (tmp3 = 0; tmp3 < 10; tmp3++) {
        printf("%d ", c[tmp3]);
    }
    printf("\n");
    for (tmp3 = 0; tmp3 < 10; tmp3++) {
        if (c[tmp3] % 2 != 0) {
            d[tmp4] = c[tmp3];
            tmp4++;
        } else {
            e[tmp5] = c[tmp3];
            tmp5++;
        }
    }
    printf("奇数: ");
    for (tmp3 = 0; tmp3 < tmp4; tmp3++) {
        printf("%d ", d[tmp3]);
    }
    printf("\n");
    printf("偶数: ");
    for (tmp3 = 0; tmp3 < tmp5; tmp3++) {
        printf("%d ", e[tmp3]);
    }
    printf("\n");

    printf("5-4.\n");
    int f[10], g[10], h[10], tmp6, tmp7, tmp8;
    tmp7 = 0; tmp8 = 0;
    for (tmp6 = 0; tmp6 < 10; tmp6++) {
        f[tmp6] = rand() % 10 + 1;
        if (f[tmp6] >= 5) {
            g[tmp7] = f[tmp6];
            tmp7++;
        } else {
            h[tmp8] = f[tmp6];
            tmp8++;
        }
    }
    for (tmp6 = 0; tmp6 < 10; tmp6++) {
        printf("%d ", f[tmp6]);
    }
    printf("\n");
    printf("5以上の数: ");
    for (tmp6 = 0; tmp6 < tmp7; tmp6++) {
        printf("%d ", g[tmp6]);
    }
    printf("\n");
    printf("5未満の数: ");
    for (tmp6 = 0; tmp6 < tmp8; tmp6++) {
        printf("%d ", h[tmp6]);
    }
    printf("\n");

    printf("5-5.\n");
    int i[10], j[10], k[10], tmp9, tmp10, tmp11;
    tmp10 = 0; tmp11 = 0;
    for (tmp9 = 0; tmp9 < 10; tmp9++) {
        i[tmp9] = rand() % 10 + 1;
        if (i[tmp9] % 3 == 0) {
            j[tmp10] = i[tmp9];
            tmp10++;
        } else {
            k[tmp11] = i[tmp9];
            tmp11++;
        }
    }
    for (tmp9 = 0; tmp9 < 10; tmp9++) {
        printf("%d ", i[tmp9]);
    }
    printf("\n");
    printf("3の倍数: ");
    for (tmp9 = 0; tmp9 < tmp10; tmp9++) {
        printf("%d ", j[tmp9]);
    }
    printf("\n");
    printf("3の倍数以外の数: ");
    for (tmp9 = 0; tmp9 < tmp11; tmp9++) {
        printf("%d ", k[tmp9]);
    }
    printf("\n");

    printf("5-6.\n");
    int l[10], m, n, tmp12;
    m = 0; n = 10;
    for (tmp12 = 0; tmp12 < 10; tmp12++) {
        l[tmp12] = rand() % 10 + 1;
        if (l[tmp12] > m) {
            m = l[tmp12];
        }
        if (l[tmp12] < n) {
            n = l[tmp12];
        }
        printf("%d ", l[tmp12]);
    }
    printf("\n");
    printf("最大値: %d\n", m);
    printf("最小値: %d\n", n);

    printf("5-7.\n");
    int o[5], p[5], q[5], sum, tmp13, tmp14, tmp15;
    double avg;
    sum = 0, tmp14 = 0, tmp15 = 0;
    for (tmp13 = 0; tmp13 < 5; tmp13++) {
        o[tmp13] = rand() % 10 + 1;
        sum += o[tmp13];
        printf("%d ", o[tmp13]);
    }
    printf("\n");
    avg = sum / 5.0;
    printf("合計値: %d\n", sum);
    printf("平均値: %g\n", avg);
    for (tmp13 = 0; tmp13 < 5; tmp13++) {
        if (o[tmp13] > avg) {
            p[tmp14] = o[tmp13];
            tmp14++;
        }
        if (o[tmp13] < avg) {
            q[tmp15] = o[tmp13];
            tmp15++;
        }
    }
    printf("平均値より大きい数: ");
    for (tmp13 = 0; tmp13 < tmp14; tmp13++) {
        printf("%d ", p[tmp13]);
    }
    printf("\n");
    printf("平均値より小さい数: ");
    for (tmp13 = 0; tmp13 < tmp15; tmp13++) {
        printf("%d ", q[tmp13]);
    }
    printf("\n");

    printf("5-8. ");
    int r[5], s, t, u, tmp16;
    s = 0, t = 0, u = 0;
    for (tmp16 = 0; tmp16 < 5; tmp16++) {
        r[tmp16] = rand() % 20 - 10;
        printf("%d ", r[tmp16]);
        if (r[tmp16] > 0) {
            s++;
        } else if (r[tmp16] < 0) {
            t++;
        } else {
            u++;
        }
    }
    printf("\n");
    printf("0より大きい数: %d個\n", s);
    printf("0より小さい数: %d個\n", t);
    printf("0の個数: %d個\n", u);

    printf("5-9.\n");
    int v[10], w[10], x[10], tmp17, tmp18, tmp19;
    tmp18 = 0, tmp19 = 0;
    for (tmp17 = 0; tmp17 < 10; tmp17++) {
        v[tmp17] = rand() % 100;
        printf("%d ", v[tmp17]);
        if (v[tmp17] >= 50) {
            w[tmp18] = v[tmp17];
            tmp18++;
        } else {
            x[tmp19] = v[tmp17];
            tmp19++;
        }
    }
    printf("\n");
    printf("50以上の数: ");
    for (tmp17 = 0; tmp17 < tmp18; tmp17++) {
        printf("%d ", w[tmp17]);
    }
    printf("\n");
    printf("50未満の数: ");
    for (tmp17 = 0; tmp17 < tmp19; tmp17++) {
        printf("%d ", x[tmp17]);
    }
    printf("\n");

    printf("5-10.\n");
    int y[5], tmp20, tmp21;
    for (tmp20 = 0; tmp20 < 5; tmp20++) {
        y[tmp20] = rand() % 10 + 1;
        printf("%d ", y[tmp20]);
    }
    printf("\n");
    for (tmp20 = 0; tmp20 < 5; tmp20++) {
        for (tmp21 = 0; tmp21 < y[tmp20]; tmp21++) {
            printf("*");
        }
        printf("\n");
    }

    printf("5-11.\n");
    int z[5], aa[5], ab[5], ac[5], tmp25, tmp22, tmp23, tmp24;
    for (tmp25 = 0; tmp25 < 5; tmp25++) {
        z[tmp25] = rand() % 100 + 1;
        printf("%d ", z[tmp25]);
        if (z[tmp25] < 60) {
            aa[tmp22] = z[tmp25];
            tmp22++;
        } else if (z[tmp25] >= 60 && z[tmp25] < 80) {
            ab[tmp23] = z[tmp25];
            tmp23++;
        } else {
            ac[tmp24] = z[tmp25];
            tmp24++;
        }
    }
    printf("\n");
    printf("0以上60未満: ");
    for (tmp25 = 0; tmp25 < tmp22; tmp25++) {
        printf("%d ", aa[tmp25]);
    }
    printf("\n");
    printf("60以上80未満: ");
    for (tmp25 = 0; tmp25 < tmp23; tmp25++) {
        printf("%d ", ab[tmp25]);
    }
    printf("\n");
    printf("80以上: ");
    for (tmp25 = 0; tmp25 < tmp24; tmp25++) {
        printf("%d ", ac[tmp25]);
    }
    printf("\n");

    printf("5-12.\n");
    int ad[3][3], tmp26, tmp27;
    for (tmp26 = 0; tmp26 < 3; tmp26++) {
        for (tmp27 = 0; tmp27 < 3; tmp27++) {
            ad[tmp26][tmp27] = rand() % 9;
            printf("%d ", ad[tmp26][tmp27]);
        }
        printf("\n");
    }

    printf("5-13.\n");
    int ae[3][3], max, min, tmp28, tmp29;
    max = 0, min = 9;
    for (tmp28 = 0; tmp28 < 3; tmp28++) {
        for (tmp29 = 0; tmp29 < 3; tmp29++) {
            ae[tmp28][tmp29] = rand() % 9;
            printf("%d ", ae[tmp28][tmp29]);
            if (max < ae[tmp28][tmp29]) {
                max = ae[tmp28][tmp29];
            }
            if (min > ae[tmp28][tmp29]) {
                min = ae[tmp28][tmp29];
            }
        }
        printf("\n");
    }
    printf("最大値: %d\n", max);
    printf("最小値: %d\n", min);
}
