#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    int a=0;
    for(int i=1; i<=n-1; i++)
    {
        if(n%i==0)
        {
            a=1;
            break;
        }

    }
    if(n==1) printf("1 is neither prime nor composite\n");
    else if (a==0) printf("The given number is Prime\n");
    else printf ("The given number is Composite\n");
    return 0;
}


