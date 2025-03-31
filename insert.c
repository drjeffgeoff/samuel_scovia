#include <stdio.h>
#define SIZE 10

int main()
{
    int arr[SIZE] = {1, 2, 3, 4, 5};
    int n = 5; // Current number of elements

    // Insert 99 at end
    if (n < SIZE)
    {
        arr[n] = 99;
        n++; // Increment count
    }
    else
    {
        printf("Array full!\n");
    }

    // Print array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}