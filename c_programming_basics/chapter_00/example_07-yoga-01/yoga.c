
#include <stdio.h>
#include <stdarg.h>

int yoga( int rows
        , int row_lenth
        , int classroom[][4]
        , int num_poses
        , int __poses, ...) {
    /* return the number of poses completed */
    int poses_completed = 0;
    int row_sum = 0;
    int student = 0;
    int pose = 0;

    int poses[num_poses];

    rows = rows / row_lenth;
    row_lenth = row_lenth / sizeof(int);

    // printf("row_lenth: \t%i\n", row_lenth);
    // printf("rows:   \t%i\n", rows  );
    // printf("__poses: \t%i\n", __poses  );

    va_list _poses;
    va_start(_poses, __poses);
    // make poses array
    for (int i = 0; i < num_poses; i++) {
        if ( i == 0 ) {
            poses[i] = __poses;
        } else if (i >= num_poses) {
            break;
        } else {
            poses[i] = va_arg(_poses, int);
        }
        // printf("pose %i\n", poses[i]); // confirmed, this is working
    }
    va_end(_poses);

    printf("\n");
    // for row in classroom: // row = classroom[i]
    for (int i = 0; i < rows; i++) {
        // printf("%i\n", i); // this is working -> 0, 1, 2

        row_sum = 0;
        for (int j = 0; j < row_lenth; j++) {
            row_sum += classroom[i][j];
        }
        // printf("row_sum: \t%i\n", row_sum); // confirmed, this is working

        // for student in row: // student =classroom[i][j]
        for (int j = 0; j < row_lenth; j++) {
            // printf("%i, ", classroom[i][j]); // confirmed, this is working
            student = classroom[i][j];

            // for pose in poses:
            for (int k = 0; k < num_poses; k++) {
                pose = poses[k];
                // printf("pose: \t%i\n", pose);
                if ((student + row_sum) >= pose) {
                    poses_completed++;
                }
            }
            // printf("\n");
        }
    }
    printf("total poses completed: %i\n", poses_completed);
    return poses_completed;
}

int main() {
    // 2 dimentional arrays
    int a_2d[5][3] =
        { {3, 5, 8} /* 16: 19, 21, 24 -> 12 */
        , {2, 7, 6} /* 15: 17, 22, 21 ->  */
        , {8, 9, 6} /* 23: 31, 32, 29 ->  */
        , {1, 9, 4} /* 14: 15, 23, 18 ->  */
        , {5, 3, 2} /* 10: 15, 13, 12 ->  */ };

    int b_2d[3][4] =
        { { 3, 2, 1, 3 }
        , { 1, 3, 2, 1 }
        , { 1, 1, 1, 2 } };

    // yoga(sizeof(a_2d), sizeof(a_2d[0]), a_2d, 5, 12, 24, 28, 20, 31);

    yoga(sizeof(b_2d), sizeof(b_2d[0]), b_2d, 8, 1, 7, 5, 9, 10, 21, 4, 3); // 68

    return 0;
}
