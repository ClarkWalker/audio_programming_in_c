
#include <stdio.h>
#include <stdarg.h>

int yoga( int row_count
        , int column_count
        , int num_poses
        , int poses[]
        , int __rows[], ... ) {

    printf("row_count %i\n", row_count);
    printf("column_count %i\n", column_count);

    for (int i = 0; i < num_poses; i++) {
        /* code */
    }
    // printf( "%i\n", );
    // printf( "%i\n", );
    int poses_completed;
    // int poses[num_poses];
    int rows[column_count];

    va_list _rows;
    va_start(_rows, __rows);
    // va_arg(_rows[], int);
    for (int i = 0; i < row_count; i++) {
        for (int j = 0; j < column_count; j++) {
            if (i == 0 ) {
                if (j == 0) {
                }
            }
            rows[i] = va_arg(_rows, int);
            printf("row: %i\n", rows[i]);
        }
    }

    va_end(_rows);
}

int main() {
    // 2 dimentional arrays
    int a_2d[5][3] =
        { { 3, 5, 8 }
        , { 2, 7, 6 }
        , { 8, 9, 6 }
        , { 1, 9, 4 }
        , { 5, 3, 2 } };

    int b_2d[3][4] =
        { { 3, 2, 1, 3 }
        , { 1, 3, 2, 1 }
        , { 1, 1, 1, 2 } };

    int poses_1[8] = { 1, 7, 5, 9, 10, 21, 4, 3 };
    // yoga(sizeof(a_2d), sizeof(a_2d[0]), a_2d, 5, 12, 24, 28, 20, 31);

    yoga( sizeof(b_2d)    / sizeof(b_2d[0])
        , sizeof(b_2d[0]) / sizeof(b_2d[0][0])
        , sizeof(poses_1) / sizeof(poses_1[0])
        , poses_1
        , b_2d[0], b_2d[1], b_2d[2]
        ); // 68
    return 0;
}
