#include<stdio.h>
int main()
{  
int a, b, r;
printf("Enter Dividend :");
scanf("%d",&a);
printf("Enter Divisor :");
scanf("%d",&b);
// q = a/b;
// r = a - b*q;
r = a % b;

 printf("The Remainder when %d is divided by %d is : %d",a,b,r);
    return 0;
}

