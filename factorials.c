#include <stdio.h>
long long factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}
void printFactorials(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("Factorial of %d is %lld\n", i, factorial(i));
    }
}
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printFactorials(n);

    return 0;
}