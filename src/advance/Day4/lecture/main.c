// // ex.4-1
// #include <stdio.h>
// #include <string.h>

// void main() {
//     char s[10];
//     int len;

//     // 文字列のコピー
//     strcpy(s, "ABC");
//     printf("s = %s\n", s);

//     // 文字列の結合
//     strcat(s, "DEF");
//     printf("s = %s\n", s);

//     // 文字列の長さ
//     len = strlen(s);
//     printf("文字列の長さ: %d\n", len);
// }

// // ex.4-2
// #include <stdio.h>
// #include <string.h>

// void main() {
//     char s1[256], s2[256];
//     printf("s1 = ");
//     scanf("%s", s1);
//     printf("s2 = ");
//     scanf("%s", s2);

//     if (strcmp(s1, s2) == 0) {
//         printf("s1とs2は等しい\n");
//     } else {
//         printf("s1とs2は等しくない\n");
//     }
// }

// // ex.4-3
// #include <stdio.h>
// #include <stdlib.h>

// void main() {
//     char s1[] = "1000";
//     char s2[] = "12.345";
//     int a;
//     double b;
//     a = atoi(s1);
//     b = atof(s2);
//     printf("a = %d b = %f\n", a, b);
// }

// ex.4-4
#include <stdio.h>
#include <string.h>

void main() {
    char s1[256], s2[256];
    int a = 100, b = 200;
    sprintf(s1, "%d", a);
    sprintf(s2, "bの値は%dです", b);
    puts(s1);
    puts(s2);
}