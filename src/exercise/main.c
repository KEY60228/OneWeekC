#include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// #include "calculation.c"
// #include "randLib.c"
// #include "nameDB.c"
// #include "calculation.c"
// #include "showResult.c"
#include "logic.c"
#include "showResult.c"

// void main() {
//     int n1, n2;
//     int r1, r2;
//     printf("n1=");
//     scanf("%d", &n1);
//     printf("n2=");
//     scanf("%d", &n2);
//     r1 = div(n1, n2);
//     r2 = mod(n1, n2);
//     printf("%d / %d = %d 余り %d\n", n1, n2, r1, r2);
// }

// void main() {
//     int i, num;
//     init_rand();
//     for (i = 0; i < 100; i++) {
//         num = getRand(-10, 10);
//         printf("乱数: %d\n", num);
//     }
// }

// void main() {
//     init();
//     setName(0, "山田太郎");
//     setName(1, "太田花子");
//     setName(2, "徳川家康");
//     showName(1);
//     showName(2);
//     showName(0);
// }

// void main() {
//     init(100);
//     showNum();
//     add(10);
//     showNum();
//     sub(100);
//     showNum();
// }

void main() {
    int num;
    init();
    printf("ジャンケンゲーム\n");
    printf("0:グー、1:チョキ、2:パー\n");
    while(1) {
        printf("あなたの手は？(0-2): ");
        scanf("%d", &num);
        if (num < 0 || num > 2) {
            printf("終了します\n");
            break;
        } else {
            setPlayer(num);
            setComputer();
            Judge();
        }
    }
}
