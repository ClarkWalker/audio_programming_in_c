
#include <stdio.h>

int main() {
    short mask = 0x8000, value, masked;
    short short_num1 = 0x7FFF; // is a negative number
    short short_num2 = 0xFFFF; // is a positive number
    printf("short_num1:   \t%i\n", short_num1); // this is a negative number
    printf("short_num2:   \t%i\n", short_num2); // this is a positive number

    int int_num1 = 0x7FFF;
    int int_num2 = 0x8000;
    printf("int_num1:\t%i\n", int_num1);
    printf("int_num2:\t%i\n", int_num2);

    int hex_num = 0x000F;
    //              +      _       _       _       _
    int bin_num = 0b00000000000000000000000000001111;
    //              -      ^       ^       ^       ^
    //              +      _       _       _       _
    short short_bin_num = 0b1000000000001111;
    //              -      ^       ^       ^       ^
    //                       +      _       _       _       _
    short short_bin_num1 = 0b0000000000001111; //  15
    short short_bin_num2 = 0b1111111111110001; // -15
    //                       -      ^       ^       ^       ^
    printf("hex_num:\t%i\n", hex_num);
    printf("bin_num:\t%i\n", bin_num);
    printf("short_bin_num1:\t%i\n", short_bin_num1);
    printf("short_bin_num2:\t%i\n", short_bin_num2);

    short and_masked, or_masked;
    // value = 0x0111;
    value = 0x0111;
    and_masked = value & mask;
    or_masked  = mask | value; // ffff,ff11
    printf("%i\n", value);
    printf("%i\n", and_masked);
    printf("%i\n", or_masked);
    return 0;
}
