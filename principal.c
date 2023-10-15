#include "sumres.h"
#include "muldiv.h"

int main(void) {

    int a = 6;
    int b = 4;

    printf(" suma de %d y %d: %d\n", a, b, suma(a, b));
    printf("resta de %d y %d: %d\n", a, b, resta(a, b));
    printf("resta de %d y %d: %d\n", b, a, resta(b, a));

    a = 34;
    b = 4;

    printf("MUL de %d y %d: %d\n", a, b, multiplica(a, b));
    printf("MUL de %d y %d: %d\n", b, a, multiplica(b, a));

    a = 3;
    b = 5;
    printf("MUL de %d y %d: %d\n", a, b, multiplica(a, b));
    printf("MUL de %d y %d: %d\n", b, a, multiplica(b, a));

    printf("DIV de %d y %d: %d\n", a, b, divide(a, b));
    printf("DIV de %d y %d: %d\n", b, a, divide(b, a));

    a = 4;
    b = 34;
    printf("DIV de %d y %d: %d\n", a, b, divide(a, b));
    printf("DIV de %d y %d: %d\n", b, a, divide(b, a));

    a = 4;
    b = 4;
    printf("DIV de %d y %d: %d\n", a, b, divide(a, b));
    printf("DIV de %d y %d: %d\n", b, a, divide(b, a));
}