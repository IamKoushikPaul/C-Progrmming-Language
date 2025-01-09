#include<stdio.h>
int main()
{
    int a,b;
    printf("Entae A:");
    scanf("%d",&a);
    printf("Enter B:");
    scanf("%d",&b);
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("The valu of a is %d\n",a);
    printf("The valu of b is %d\n",b);
    return 0;

}