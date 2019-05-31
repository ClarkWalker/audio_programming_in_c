
#include <stdio.h>
#include <stdarg.h>

int yoga(int arr_size, int classroom[][3], int _poses, ...) {
    /* return the number of poses completed */
    int poses_completed = 0;
    int row_sum = 0;
    int person = 0;
    int row_lenth = 0;
    int pose = 0;

    printf("_poses: %i\n", _poses);
    va_list poses;
    va_start(poses, _poses);
    for (int h = 0; h < 5; h++) {
        if (h == 0) {
            pose = _poses;
        } else if (h > 5) {
            break;
        } else {
            pose = va_arg(poses, int);
        } printf("pose: %i\n", pose);

        for (int j = 0; j < 6; j++) {
            row_sum = 0;
            person = *classroom[j];

            for (int k = 0; k < 3; k++) {
                row_sum += classroom[j][k];
            }  printf("    row_sum %i\n", row_sum);
            printf("        person: %i\n", person);
            printf("        person + row_sum: %i\n", person + row_sum);

            if ((person + row_sum) >= pose) {
                poses_completed ++;
                printf("            poses_completed: %i\n", poses_completed);
            }
        }
        printf("\n");
    }
    va_end(poses);
    return poses_completed;
}

int main() {
    int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // size_t a_length = sizeof(a) / sizeof(int);
    int a_length= sizeof(a) / sizeof(int);//printf("a_length: %i\n", a_length);
    int b[] = {};
    int b_length= sizeof(b) / sizeof(int);//printf("b_length: %i\n", b_length);
    printf("%i\n", b_length);
    printf("{");

    for (int i = 0; i < a_length; i++) {
        // b[i] = a[i]; // oh shit this code is dangerous as hell!
        // printf("%i \n", a[i]);
        // printf("%i ", a[i]);
        printf("%i ", b[i]);
    } printf("}"); printf("\n");

    b_length = sizeof(b) / sizeof(int);
    printf("%i\n", b_length);

    // 2 dimentional arrays
    int a_2d[5][3] = { {3, 5, 8} /* 16: 19, 21, 24 -> 12 */
                     , {2, 7, 6} /* 15: 17, 22, 21 ->  */
                     , {8, 9, 6} /* 23: 31, 32, 29 ->  */
                     , {1, 9, 4} /* 14: 15, 23, 18 ->  */
                     , {5, 3, 2} /* 10: 15, 13, 12 ->  */};

    yoga(5, a_2d, 12, 24, 28, 20, 31);
    return 0;
}
