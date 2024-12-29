#include<stdio.h>
int main()
{
    float x, z;
    printf("Enter Float Number :");
    scanf("%f",&x);
    int y;
    y = x;
    z = x - y;
    printf("The Fractional Part of the Real Number :%.2f",z);
    return 0;
}