#include <stdio.h>

int main() {
    double x, y;

    // Input the coordinates of the point
    printf("Enter the coordinates of the point (x y): ");
    scanf("%lf %lf", &x, &y);

    // Check the location of the point
    if (x == 0 && y == 0) {
        printf("The point lies at the origin (0, 0).\n");
    } else if (x == 0) {
        printf("The point lies on the y-axis.\n");
    } else if (y == 0) {
        printf("The point lies on the x-axis.\n");
    } else {
        printf("The point does not lie on the x-axis, y-axis, or the origin.\n");
    }

    return 0;
}