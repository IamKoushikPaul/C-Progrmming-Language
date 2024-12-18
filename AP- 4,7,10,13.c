#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number:");
    scanf("%d",&n);
    for(int i=4; i<=3*n+1; i+=3) //4,7,10.....
    {
       printf("%d\n",i);
    }
    return 0;
}




