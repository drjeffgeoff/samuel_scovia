#include <stdio.h>

int main()
{
    int fibonacci[5] = {0, 1, 1, 2, 3};

    // Access elements
    printf("First element: %d\n", fibonacci[0]); // 0
    printf("Third element: %d\n", fibonacci[2]); // 1

    // Modify element
    fibonacci[4] = 5;
    printf("Modified fifth element: %d\n", fibonacci[4]); // 5

    return 0;
}