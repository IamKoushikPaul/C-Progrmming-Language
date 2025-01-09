#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    printf("Enter a Number: ");
    scanf("%d", &a);

    if (a >= 0) { // Check to ensure the number is non-negative
        double root = sqrt((double)a); // Use double for correct sqrt calculation
        printf("The square root is: %.2f\n", root); // Print with two decimal points
    } else {
        printf("Invalid input! Square root of a negative number is not defined for real numbers.\n");
    }
    
    return 0;
}
