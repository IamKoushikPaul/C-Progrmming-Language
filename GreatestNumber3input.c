#include<stdio.h>
int main()
{
     int a,b,c;
     printf("Enter A number :");
     scanf("%d",&a);
     
     printf("Enter B number :");
     scanf("%d",&b);
     
     printf("Enter C number :");
     scanf("%d",&c);

     if(a>b && a>c)
     printf("The Greatest Number is A.");

     else if(b>a && b>c)
     printf("The Greatest Number is B.");

     else if(c>b && c>a)
     printf("The Greatest Number is C.");

     else
     printf("A equl B equl C");
    

    return 0;
}