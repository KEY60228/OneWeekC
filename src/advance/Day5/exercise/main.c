// // ex.6-1
// #include <stdio.h>

// typedef struct {
//     float x;
//     float y;
// } Vector2D;

// void main() {
//     Vector2D v1, v2;
//     printf("v1.x = ");
//     scanf("%f", &(v1.x));
//     printf("v1.y = ");
//     scanf("%f", &(v1.y));
//     printf("v2.x = ");
//     scanf("%f", &(v2.x));
//     printf("v2.y = ");
//     scanf("%f", &(v2.y));
//     printf("(%f, %f) + (%f, %f) = (%f, %f)\n", v1.x, v1.y, v2.x, v2.y, (v1.x + v2.x), (v1.y + v2.y));
//     printf("(%f, %f) - (%f, %f) = (%f, %f)\n", v1.x, v1.y, v2.x, v2.y, (v1.x - v2.x), (v1.y - v2.y));
// }

// // ex.6-2
// #include <stdio.h>
// #include <string.h>

// #define STUDENT_NUM (5)

// struct student {
//     char name[256];
//     int id;
//     int sex;
//     int grade;
// };

// typedef struct student student_data;

// void main() {
//     int i;
//     student_data data[STUDENT_NUM];
//     char name[STUDENT_NUM][256] = { "青木一", "遠藤京子", "加藤悟", "佐々木八重子", "田中徹" };
//     int id[STUDENT_NUM] = { 1001, 1002, 1003, 1004, 1005 };
//     int sex[STUDENT_NUM] = { 0, 1, 0, 1, 0 };
//     int grade[STUDENT_NUM] = { 1, 1, 1, 1, 1 };

//     for (i = 0; i < STUDENT_NUM; i++) {
//         strcpy(data[i].name, name[i]);
//         data[i].id = id[i];
//         data[i].sex = sex[i];
//         data[i].grade = grade[i];
//     }

//     for (i = 0; i < STUDENT_NUM; i++) {
//         printf("名前: %s\n", data[i].name);
//         printf("性別: ");
//         if (data[i].sex == 0) {
//             printf("男\n");
//         } else {
//             printf("女\n");
//         }
//         printf("学生番号: %d\n", data[i].id);
//         printf("学年: %d\n", data[i].grade);
//     }
// }

// // ex.6-3
// #include <stdio.h>

// typedef struct {
//     int hour;
//     int minute;
//     int second;
// } Time;

// void setTime(Time*, int, int, int);
// int getDiffMinute(Time*, Time*);

// void main() {
//     Time start, end;
//     int diff;
//     setTime(&start, 1, 10, 13);
//     setTime(&end, 2, 20, 42);
//     diff = getDiffMinute(&start, &end);
//     printf("%d:%d:%dと%d:%d:%dの違いは、%d秒です\n", start.hour, start.minute, start.second, end.hour, end.minute, end.second, diff);
// }

// void setTime(Time* time, int hour, int minute, int second) {
//     time->hour = hour;
//     time->minute = minute;
//     time->second = second;
// }

// int getDiffMinute(Time* start, Time* end) {
//     int starts, ends;
//     starts = (start->hour * 60 * 60) + (start->minute * 60) + (start->second);
//     ends = (end->hour * 60 * 60) + (end->minute * 60) + (end->second);
//     return ends - starts;
// }

// // ex.6-3, 6-4, 6-5
// #include <stdio.h>

// #define STUDENT_NUM (5)

// typedef struct {
//     int id;
//     int kokugo;
//     int sansu;
//     int rika;
//     int shakai;
//     int eigo;
// } student_data;

// void setStudentData(student_data*, int, int, int, int, int, int);
// double getAvg(int[STUDENT_NUM]);
// void showAvg(char[256], double);
// int sum(student_data*);
// void showData(student_data*, int);
// void sort(student_data*, int*);

// void main() {
//     student_data data[STUDENT_NUM];
//     int id[STUDENT_NUM] = { 1001, 1002, 1003, 1004, 1005 };
//     int kokugo[STUDENT_NUM] = { 82, 92, 43, 72, 99 };
//     int sansu[STUDENT_NUM] = { 43, 83, 32, 73, 72 };
//     int rika[STUDENT_NUM] = { 53, 88, 53, 71, 82 };
//     int shakai[STUDENT_NUM] = { 84, 79, 45, 68, 91 };
//     int eigo[STUDENT_NUM] = { 45, 99, 66, 59, 94 };
//     for (int i = 0; i < STUDENT_NUM; i++) {
//         setStudentData(&data[i], id[i], kokugo[i], sansu[i], rika[i], shakai[i], eigo[i]);
//     }
//     // 6-3
//     double kokugoAvg = getAvg(kokugo);
//     double sansuAvg = getAvg(sansu);
//     double rikaAvg = getAvg(rika);
//     double shakaiAvg = getAvg(shakai);
//     double eigoAvg = getAvg(eigo);
//     showAvg("国語", kokugoAvg);
//     showAvg("算数", sansuAvg);
//     showAvg("理科", rikaAvg);
//     showAvg("社会", shakaiAvg);
//     showAvg("英語", eigoAvg);
//     // 6-4
//     int amount[STUDENT_NUM];
//     for (int i = 0; i < STUDENT_NUM; i++) {
//         amount[i] = sum(&data[i]);
//     }
//     printf("番号    国語    数学    理科    社会    英語    合計\n");
//     for (int i = 0; i < STUDENT_NUM; i++) {
//         showData(&data[i], amount[i]);
//     }
//     // 6-5
//     sort(&data[0], &amount[0]);
//     printf("番号    国語    数学    理科    社会    英語    合計\n");
//     for (int i = 0; i < STUDENT_NUM; i++) {
//         showData(&data[i], amount[i]);
//     }
// }

// void setStudentData(student_data* data, int id, int kokugo, int sansu, int rika, int shakai, int eigo) {
//     data->id = id;
//     data->kokugo = kokugo;
//     data->sansu = sansu;
//     data->rika = rika;
//     data->shakai = shakai;
//     data->eigo = eigo;
// }

// double getAvg(int scores[STUDENT_NUM]) {
//     double sum = 0;
//     for (int i = 0; i < STUDENT_NUM; i++) {
//         sum += scores[i];
//     }
//     return sum / STUDENT_NUM;
// }

// void showAvg(char title[256], double avg) {
//     printf("%s 平均 = %f\n", title, avg);
// }

// int sum(student_data* data) {
//     return data->kokugo + data->sansu + data->rika + data->shakai + data->eigo;
// }

// void showData(student_data* data, int sum) {
//     printf("%d      %d       %d      %d      %d     %d     %d\n", data->id, data->kokugo, data->sansu, data->rika, data->shakai, data->eigo, sum);
// }

// void sort(student_data* data, int* sum) {
//     for (int i = 0; i < STUDENT_NUM; i++) {
//         for (int j = 0; j < STUDENT_NUM; j++) {
//             if (*(sum + i) > *(sum + j)) {
//                 student_data tmp_data = *(data + i);
//                 int tmp_sum = *(sum + i);
//                 *(data + i) = *(data + j);
//                 *(sum + i) = *(sum + j);
//                 *(data + j) = tmp_data;
//                 *(sum + j) = tmp_sum;
//             }
//         }
//     }
// }

// ex.6-7
#include <stdio.h>

#define MONTHS (6)

typedef struct {
    int month;
    int rents;
    int foods;
    int wears;
    int educations;
    int medics;
    int others;
} kakei;

int goukei(kakei*);
int maxMedics(kakei*);
int maxFoods(kakei*);

void main() {
    kakei data[MONTHS] = {
        { 1, 86000, 47000, 3000, 20000, 9500, 66000 },
        { 2, 86000, 43000, 30000, 15000, 0, 43000},
        { 3, 86000, 38600, 5000, 65000, 500, 76000 },
        { 4, 86000, 39500, 0, 12000, 0, 75000 },
        { 5, 86000, 38600, 28000, 7000, 5200, 63500 },
        { 6, 86000, 37500, 3000, 5000, 0, 67000 }
    };
    int sum[MONTHS];
    for (int i = 0; i < MONTHS; i++) {
        sum[i] = goukei(&data[i]);
    }
    printf("各月の出費の合計\n");
    for (int i = 0; i < MONTHS; i++) {
        printf("%d月 %d\n", i + 1, sum[i]);
    }
    int maxMedicMonth = data[maxMedics(&data[0])].month;
    printf("医療費の最も多い月: %d月\n", maxMedicMonth);
    int maxFoodsMonth = data[maxFoods(&data[0])].month;
    int maxFoodsAmount = data[maxFoods(&data[0])].foods;
    printf("食費の最も多い月と金額: %d月、%d\n", maxFoodsMonth, maxFoodsAmount);
}

int goukei(kakei* data) {
    return data->rents + data->foods + data->wears + data->educations + data->medics + data->others;
}

int maxMedics(kakei* data) {
    int j = 0;
    for (int i = 0; i < MONTHS; i++) {
        if ((data + j)->medics < (data + i)->medics) {
            j = i;
        }
    }
    return j;
}

int maxFoods(kakei* data) {
    int j = 0;
    for (int i = 0; i < MONTHS; i++) {
        if ((data + j)->foods < (data + i)->foods) {
            j = i;
        }
    }
    return j;
}
