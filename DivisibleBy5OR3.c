#include<stdio.h>
int main()
{
     int n;
     printf("Enter A number :");
     scanf("%d",&n);
    //for(int i=1; i<=1000; i++)

        if( n%5==0 || n%3==0)
    {printf("Divisible by 5 and 3.");}
    
     else
     printf("Not Divisible by 5 and 3.");

    return 0;
}