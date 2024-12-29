#include <stdio.h>

int main() {
    double x1, y1, x2, y2, x3, y3;
    double m1, m2;

    // Input three points
    printf("Enter the coordinates of the first point (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter the coordinates of the second point (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);
    printf("Enter the coordinates of the third point (x3 y3): ");
    scanf("%lf %lf", &x3, &y3);

    // Calculate slopes if no division by zero
    if (x2 != x1 && x3 != x2) {
        m1 = (y2 - y1) / (x2 - x1);
        m2 = (y3 - y2) / (x3 - x2);

        if (m1 == m2) {
            printf("The points are collinear.\n");
        } else {
            printf("The points are not collinear.\n");
        }
    } else {
        // Vertical line check
        if (x2 == x1 && x3 == x2) {
            printf("The points are collinear (Vertical Line).\n");
        } else {
            printf("The points are not collinear.\n");
        }
    }

    return 0;
}