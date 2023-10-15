#include "muldiv.h"

int multiplica(int a, int b)
{
    int ac = 0;
    for (int i = 0; i < a; i++)
    {
        ac += b;
    }
    return ac;
}

int divide(int D, int d)
{
    if (D < d)
        return 0;

    if (D == d)
        return 1;
    
    //assert (D > d)
    int c = 0;
    while (D > d)
    {
        c++;
        D -= d;
    }
    return c;
}


/*/// ------------------------------
#include <stdio.h>
int main()
{

    int a = 34;
    int b = 4;

    // printf("MUL de %d y %d: %d\n", a, b, multiplica(a, b));
    // printf("MUL de %d y %d: %d\n", b, a, multiplica(b, a));
    // a = 3;
    // b = 5;
    // printf("MUL de %d y %d: %d\n", a, b, multiplica(a, b));
    // printf("MUL de %d y %d: %d\n", b, a, multiplica(b, a));

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
//*/// ------------------------------