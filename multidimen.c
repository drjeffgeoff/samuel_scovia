//(one-dimensional and multi-dimensional)
#include <stdio.h>

int main()
{
    // 3x3 matrix initialisation
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    // Acccess 6 in the matrix
    printf("Element at [1][2]: %d\n", matrix[1][1]);

    // Modify / insert 25 to replace 7, [2][0]
    matrix[2][0] = 25;
    // Acccess 25 in the matrix
    printf("Element at [2][0]: %d\n", matrix[2][0]);
    // return 0;
}