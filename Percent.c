// Online C compiler to run C program online
#include <stdio.h>

int main() {
    /*float x1 = 90; 
    float x2 = 91; 
    float x3 = 92 ;
    float x4 = 93;
    //float x5 = 94; 
    float percent = (x1 + x2 + x3 + x4 )/4; 
    printf("%f", percent); */
 
    float sub1, sub2, sub3, sub4, total, p;

    // Input marks for 4 subjects
    printf("Enter marks for 4 subjects (out of 40):\n");
    scanf("%f %f %f %f", &sub1, &sub2, &sub3, &sub4);

    // Calculate total and percentage
    total = sub1 + sub2 + sub3 + sub4;
    p = (total / 160) * 100;

    // Display results
    printf("Total Marks: %.2f out of 160\n", total);
    printf("Percentage: %.2f%\n", p);

    return 0;
}
    