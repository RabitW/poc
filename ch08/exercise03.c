/*
 * An identity matrix is a square matrix whose values are all zero except for
 * those on the main diagonal, which are one. For example:
 *
 *      1       0       0
 *      0       1       0
 *      0       0       1
 *
 * is a 3 * 3 identity matrix. Write a function called identity_matrix that takes
 * a 10 * 10 matrix of integers as its only argument and returns a boolean value
 * indicating whether the matrix is an identity matrix.
 */

#include <stdbool.h>

int identity_matrix(int arr[10][10]) {
    int row, col;

    for (row = 0; row < 10; row++) {
        for (col = 0; col < 10; col++) {
            if (row != col)
                continue;
            else {
                if (arr[row][col] != 1)
                    return false;
            }
        }
    }

    return true;
}
