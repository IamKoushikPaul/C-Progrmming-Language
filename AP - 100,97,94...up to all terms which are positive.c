#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number:");
    scanf("%d",&n);
    int a=100;
    //100,97,94...
    //a>34
    //i<=34
    for(int i=1; i<=n; i++)
    {
       printf("%d\n",a);
       a=a-3;
    }
    return 0;
}






