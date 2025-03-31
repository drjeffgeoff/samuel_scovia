#include <stdio.h>

int main()
{
    int arr[] = {5, 10, 15, 20};
    int n = 4;

    if (n > 0)
    {
        n--; // Simply reduce count
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}