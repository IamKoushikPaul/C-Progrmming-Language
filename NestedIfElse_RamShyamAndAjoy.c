#include <stdio.h>
int main()
{
    int ram,shyam,ajoy;
    printf("Enter Ram year :");
    scanf("%d", &ram);

    printf("Enter Shyam year :");
    scanf("%d", &shyam);

    printf("Enter Ajoy year :");
    scanf("%d", &ajoy);

    if (ram > shyam)
    {
        if (ram > ajoy)
        printf("%d is youngest", ram);
        else // c>a
        printf("%d is youngest", ajoy);
    }
    else
    {
        if(shyam>ajoy)
        printf("%d is youngest",shyam);
        else //c>b 
        printf("%d is youngest",ajoy);
    }

    return 0;
}