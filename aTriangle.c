#include<stdio.h>
int main()
{
     int a;
     printf("Enter number :");
     scanf("%d",&a);
     int b;
     printf("Enter number :");
     scanf("%d",&b);
     int c;
     printf("Enter number :");
     scanf("%d",&c);

     if ( (a+b)>c && (a+c)>b && (b+c)>a)
     {
        printf("Valid Triangle");
     }
     else
     printf("Invalid Triangle");
    return 0;
}