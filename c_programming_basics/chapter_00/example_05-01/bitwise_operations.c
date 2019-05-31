
#include <stdio.h>
#include <string.h>

void print_bin(char s[40], int n) {
    printf("%i:\t", n);
    void fn_01(int n) {
        if (n > 1) {
            printf("%s 0b", s);
            void fn_02(int n) {
                /* Step 1 */
                if (n > 1) {fn_02(n/2);}
                /* Step 2 */
                printf("%d", n % 2);
            } fn_02(n);
        }

        else if (n < 0 ) {
            printf("%s-0b", s);
            void fn_03(int n) {
                // printf("HERE\n");
                /* Step 1 */
                if (n < -1) {fn_03(n/2);}
                /* Step 2 */
                printf("%d", -1 * (n % 2));
            } fn_03(n);
        }
    } fn_01(n);
    printf("\n");
}

int main() {
    char a[40] = "";
    short num_a = 0b1001;
    short num_b = 0b1010;

    short num_c = num_a & num_b;
    print_bin("", num_a);
    print_bin("", num_b);
    printf("      &_________\n");
    print_bin("", num_c);
    printf("\n\n");

    short num_d = num_a | num_b;
    print_bin("", num_a);
    print_bin("", num_b);
    printf("      |_________\n");
    print_bin("", num_d);
    printf("\n\n");

    short num_e = num_a ^ num_b;
    print_bin("", num_a);
    print_bin("", num_b);
    printf("      ^_________\n");
    print_bin("  ", num_e);
    printf("\n\n");

    short num_f =  0b1101;
    short num_g = ~ num_f;
    print_bin("", num_f);
    printf("      ~_________\n");
    print_bin("",num_g);
    printf("\n\n");

    short num_h =  0b1101;
    short num_i = num_h << 3;
    print_bin("   ", num_h);
    printf("     <<3___________\n");
    print_bin("", num_i);
    printf("\n\n");

    short num_j =  0b1101;
    short num_k = num_j >> 1;
    print_bin("", num_j);
    printf("     >>1________\n");
    print_bin(" ",num_k);
    printf("\n\n");
    return 0;
}
