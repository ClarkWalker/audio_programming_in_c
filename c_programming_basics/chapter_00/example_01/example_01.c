
#include <stdio.h> /* header file for IO */
int main() {       /* main function */
    // int a; // this is valid syntax
    int a = 539;
    printf("Hello World\n");  /* print message */
    printf("i: a = %i\n", a);
    printf("d: a = %d\n", a);
    printf("u: a = %u\n", a);
    printf("o: a = %o\n", a);
    printf("x: a = %x\n", a);
    printf("X: a = %X\n", a);
    // printf("f: a = %f\n", a);
    // printf("e: a = %e\n", a);
    // printf("E: a = %E\n", a);
    // printf("g: a = %g\n", a);
    // printf("G: a = %G\n", a);
    // printf("c: a = %c\n", a);
    // printf("s: a = %s\n", a);

    if (a > 0) {
        printf("%d is a positive number\n", a);
    } else  if (a == 0) {
        printf("%d is not a negative or positive number\n", a);
    } else {
        printf("%d is not a negative or positive number\n", a);
    }
    printf("\n");
    int i = 0;
    while (i <= 5) {
        switch (i) {
            case 1:
                printf("one\n");
                break;
            case 2:
                printf("two\n");
                break;
            case 3:
                printf("three\n");
                break;
            case 4:
                printf("four\n");
                break;
            default: printf("not in range \n");
        }
    i++;
    }

    return 0; /* function returns 0 (OK) */
}
