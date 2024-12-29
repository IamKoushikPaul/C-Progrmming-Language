#include<stdio.h>
int main()
{   
    
    int l;
    printf("The Length :");
    scanf("%d",&l);

    int b;
    printf("The Breadth :");
    scanf("%d",&b); 

   int a = l*b;
   int p = 2 * (l + b);

    if (a>p)
    printf("Area is greater than perimeter.");

    else if (a<p)
    printf("Area is not greater than perimeter.");

    else
    printf("Area is Equal perimeter.");

    return 0;
}