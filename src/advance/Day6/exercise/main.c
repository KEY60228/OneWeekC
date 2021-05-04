// // ex.7-1
// #include <stdio.h>
// #include <stdlib.h>

// void main() {
//     FILE* file;
//     file = fopen("HelloWorld.txt", "w");
//     if (file == NULL) {
//         printf("ファイルを開けません\n");
//         exit(1);
//     }
//     fprintf(file, "HelloWorld.\n");
//     fclose(file);
// }

// // ex.7-2
// #include <stdio.h>
// #include <stdlib.h>

// void main() {
//     FILE* file;
//     char line[256];

//     file = fopen("sample.txt", "r");
//     if (file == NULL) {
//         printf("ファイルを開けません\n");
//         exit(1);
//     }
//     while (fgets(line, 256, file) != NULL) {
//         printf("%s", line);
//     }
//     fclose(file);
// }

// // ex.7-3
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// void main() {
//     FILE* file;
//     char str[256];

//     file = fopen("data.txt", "w");
//     if (file == NULL) {
//         printf("ファイルを開けません\n");
//         exit(1);
//     }

//     while (1) {
//         printf("文字列を入力してください: ");
//         scanf("%s", str);
//         if (strcmp(str, "q") == 0) {
//             break;
//         }
//         fprintf(file, "%s\n", str);
//     }
//     fclose(file);
// }

// // ex.7-4
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// void main() {
//     FILE* file;
//     int c;

//     file = fopen("words.txt", "r");
//     if (file == NULL) {
//         printf("ファイルを開けません\n");
//         exit(1);
//     }
//     while ((c = fgetc(file)) != EOF) {
//         if (c == ',') {
//             printf("\n");
//         } else {
//             printf("%c", (char)c);
//         }
//     }
//     fclose(file);
// }

// // ex.7-5
// #include <stdio.h>
// #include <stdlib.h>

// void main() {
//     FILE* file;
//     char c;
//     int num = 0, sum = 0, digit = 0;

//     file = fopen("nums.txt", "r");
//     if (file == NULL) {
//         printf("ファイルを開けません\n");
//         exit(1);
//     }
//     while ((c = fgetc(file)) != EOF) {
//         if (c != ',') {
//             printf("%c", c);
//             if (digit == 0) {
//                 num = atoi(&c);
//             } else {
//                 num = num * 10 + atoi(&c);
//             }
//             digit++;
//         } else {
//             printf("\n");
//             sum += num;
//             digit = 0;
//             num = 0;
//         }
//     }
//     sum += num;
//     printf("\n");
//     printf("---------\n");
//     printf("合計: %d\n", sum);
//     fclose(file);
// }

// // ex.7-6
// #include <stdio.h>
// #include <stdlib.h>

// #define SIZE (6)

// void main() {
//     FILE* file;
//     int count = 0, i = 0, first = 1, a = 0;
//     char str[SIZE][256];
//     char c;

//     file = fopen("words.txt", "r");
//     if (file == NULL) {
//         printf("ファイルを開けません\n");
//         exit(1);
//     }

//     while ((c = fgetc(file)) != EOF) {
//         if (first == 1) {
//             first = 0;
//             if (c == 'a') {
//                 a = 1;
//             }
//         }
//         if (a == 1) {
//             if (c == ',') {
//                 printf("%s\n", str[count]);
//                 count++;
//                 i = 0;
//             } else {
//                 str[count][i] = c;
//                 i++;
//             }
//         }
//         if (c == ',') {
//             first = 1;
//             a = 0;
//         }
//     }

//     printf("--------\n");
//     printf("個数: %d\n", count);
// }

// ex.7-7
#include <stdio.h>
#include <stdlib.h>

#define SIZE 256
#define PEOPLE 4

void main() {
    FILE *file;
    char c;
    char line[SIZE];
    char name[SIZE];
    char maxname[SIZE];
    int score = 0, maxscore = 0;
    line[0] = '\0';

    file = fopen("score.txt", "r");
    if (file == NULL) {
        printf("ファイルを開けません\n");
        exit(1);
    }

    printf("プレイヤー 得点\n--------------------\n");
    while((fgets(line, SIZE, file)) != NULL) {
        sscanf(line,"%[^,],%d\n", name, &score);
        printf("%s\t%d点\n", name, score);
        if(score > maxscore){
        maxscore = score;
        sprintf(maxname, "%s", name);
        }
    }
    printf("--------------------\n最高得点：%s(%d)\n", maxname, maxscore);
    fclose(file);
}
