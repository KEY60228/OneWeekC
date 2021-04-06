#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#include "calc.c"
#include "showResult.c"

void main() {
    // double d1, d2, d3;
    // double a = 1.2, b = 3.4, c = 2.7;
    // d1 = avg(a, b);
    // d2 = avg(4.1, 5.7);
    // d3 = avg(c, 2.8);
    // printf("d1 = %f, d2 = %f, d3 = %f\n", d1, d2, d3);

    int a = 2, b = 3;
    printf("%d + %d = ", a, b) ;
    add(a, b);
    showAnswer();
    printf("%d - %d = ", a, b);
    sub(a, b);
    showAnswer();
}
