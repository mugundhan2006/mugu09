#include <stdio.h>

int main() {
    int a, b, temp;

    // Take input from the user
    printf("Enter first number (a): ");
    scanf("%d", &a);
    printf("Enter second number (b): ");
    scanf("%d", &b);

    // Swapping using a third variable
    temp = a;  // Store the value of a in temp
    a = b;     // Assign the value of b to a
    b = temp;  // Assign the value of temp (original a) to b

    // Output the swapped values
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
