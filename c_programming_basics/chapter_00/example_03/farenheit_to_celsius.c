
#include <stdio.h>

int main() {
    for (int frnht = 0 ; frnht < 300 ; frnht = frnht + 20) {
        printf("F: %4d,\t C: %6.1f\n", frnht, (5.0 / 9.0) * (frnht - 32));
    }
    return 0;
}
