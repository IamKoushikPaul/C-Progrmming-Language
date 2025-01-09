#include<stdio.h>
void swap (int *x, int*y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}

int main()
{
    int a=2;
    int b=3;
    swap(&a,&b);
    printf("The valu of a is %d\n",a);
    printf("The valu of b is %d\n",b);
    return 0;
}