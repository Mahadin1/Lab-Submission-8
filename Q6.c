#include <stdio.h>

int main() {
    int matrix[3][3];
    printf("Enter the elements of the 3x3 matrix:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int saddle_point_found = 0;

    for (int i = 0; i < 3; i++) {
        int min_row = matrix[i][0], min_col_idx = 0;
        for (int j = 1; j < 3; j++) {
            if (matrix[i][j] < min_row) {
                min_row = matrix[i][j];
                min_col_idx = j;
            }
        }

        int is_saddle_point = 1;
        for (int k = 0; k < 3; k++) {
            if (matrix[k][min_col_idx] > min_row) {
                is_saddle_point = 0;
                break;
            }
        }

        if (is_saddle_point) {
            printf("Saddle point found at (%d, %d) = %d\n", i, min_col_idx, min_row);
            saddle_point_found = 1;
        }
    }

    if (!saddle_point_found) {
        printf("No saddle point found.\n");
    }

    return 0;
}
