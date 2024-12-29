#include<stdio.h>
int main()
{
     int a;
     printf("Enter A number :");
     scanf("%d",&a);
     int b;
     printf("Enter B number :");
     scanf("%d",&b);
     int c;
     printf("Enter C number :");
     scanf("%d",&c);
     int d;
     printf("Enter D number :");
     scanf("%d",&d);

     if(a>b && a>c && a>d)
     printf("The Greatest Number is A.");

     else if(b>a && b>c && b>d)
     printf("The Greatest Number is B.");

     else if(c>b && c>a && c>d)
     printf("The Greatest Number is C.");

     else if(d>a && d>b && d>c)
     printf("The Greatest Number is D.");

     else
     printf("A equl B equl C equl D");
    

    return 0;
}