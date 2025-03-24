#include <stdio.h>

int main()
{
    int day = 2;
    switch (day)
    {
    case 1:
        printf("Monday \n");
        break;

    case 2:
        printf("Tuesdsy \n");
        break; //Exit a loop or statement
        
    case 3:
        printf("Wednesday \n");
        break;

    default:
        printf("Invalid day \n");
    }
    return 0;
}