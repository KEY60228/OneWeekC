// // ex.5-1
// #include <stdio.h>
// #include <string.h>

// struct student {
//     int id;
//     char name[256];
//     int age;
// };

// void main() {
//     struct student data;
//     data.id = 1;
//     strcpy(data.name, "山田太郎");
//     data.age = 18;
//     printf("学生番号: %d 名前: %s 年齢:%d\n", data.id, data.name, data.age);
// }

// // ex.5-2
// #include <stdio.h>
// #include <string.h>

// struct student {
//     int id;
//     char name[256];
//     int age;
// };

// typedef struct student student_data;

// void main() {
//     int i;
//     student_data data[] = {
//         {1, "山田太郎", 18},
//         {2, "佐藤良子", 19},
//         {3, "太田隆", 18},
//         {4, "中田優子", 18}
//     };
//     for (i = 0; i < 4; i++) {
//         printf("学生番号: %d 名前: %s 年齢: %d\n", data[i].id, data[i].name, data[i].age);
//     }
// }

// // ex.5-3
// #include <stdio.h>
// #include <string.h>

// typedef struct {
//     int id;
//     char name[256];
//     int age;
// } student_data;

// void setData(student_data*, int, char*, int);
// void showData(student_data*);

// void main() {
//     student_data data[4];
//     int i;
//     int id[] = { 1, 2, 3, 4 };
//     char name[][256] = { "山田太郎", "佐藤良子", "太田隆", "中田優子" };
//     int age[] = { 18, 19, 18, 18 };
//     for (i = 0; i < 4; i++) {
//         setData(&data[i], id[i], name[i], age[i]);
//     }
//     for (i = 0; i < 4; i++) {
//         showData(&data[i]);
//     }
//     return;
// }

// void setData(student_data* data, int id, char* name, int age) {
//     data->id = id;
//     strcpy(data->name, name);
//     data->age = age;
// }

// void showData(student_data* data) {
//     printf("学生番号: %d 名前: %s 年齢: %d\n", data->id, data->name, data->age);
// }

// ex.5-4
#include <stdio.h>

typedef struct {
    int a;
    double d;
} num_data;

void dealData1(num_data data);
void dealData2(num_data* pData);

void main() {
    num_data n1 = { 1, 1.2f }, n2 = { 1, 1.2f };
    printf("n1のアドレス: 0x%x n2のアドレス: 0x%x\n", &n1, &n2);
    dealData1(n1);
    dealData2(&n2);
    printf("n1.a = %d n1.d = %f\n", n1.a, n1.d);
    printf("n2.a = %d n2.d = %f\n", n2.a, n2.d);
}

void dealData1(num_data data) {
    printf("a = %d f = %f\n", data.a, data.d);
    printf("dealData1に渡ってきたデータのアドレス: 0x%x\n", &data);
    data.a = 2;
    data.d = 2.4;
}

void dealData2(num_data* pData) {
    printf("a = %d f = %f\n", pData->a, pData->d);
    printf("dealData2に渡ってきたデータのアドレス: 0x%x\n", pData);
    pData->a = 2;
    pData->d = 2.4;
}
