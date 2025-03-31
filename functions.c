#include <stdio.h>
/*
Functions help break down complex problems
into smaller, reusable blocks of code. They
 improve readability, reduce redundancy,
 and make debugging easier.
 */
// Function Declaration, Definition, and Calling

// Function Declaration
int add(int a, int b);

int main()
{
    int num1 = 5;
    int num2 = 10;
    // Function call
    int result = add(num1, num2);
    printf("Sum: %d\n", result);
    return 0;
}

// Function definition
int add(int a, int b)
{
    return a + b; // return sum of a amd b
}

/*
Declaration (int add(int a, int b);) →
Tells the compiler about the function
 before it is used.

Call (add(num1, num2);) → Executes the
function with given arguments.

Definition (int add(int a, int b) { ... }) →
Contains the actual logic of the function.
*/