#include <stdio.h>
#include <stdlib.h>
#include <arithmetic.h>

int main(int argc, char *argv[])
{
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    printf("<===============>\n");
    printf("Calculation Start!\n");
    printf("<===============>\n");
    printf("%d + %d => %d\n", a, b, add(a, b));
    printf("<===============>\n");
    printf("%d - %d => %d\n", a, b, sub(a, b));
    printf("<===============>\n");
    printf("%d * %d => %d\n", a, b, mul(a, b));
    printf("<===============>\n");
    printf("%d / %d => %d\n", a, b, dur(a, b));
    printf("<===============>\n");
    printf("Calculation Done!\n");
    printf("<===============>\n");

    return 0;
}
