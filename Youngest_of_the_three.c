#include <stdio.h>
int main()
{
    int ram;
    printf("Enter Ram year :");
    scanf("%d", &ram);
    int shyam;
    printf("Enter Shyam year :");
    scanf("%d", &shyam);
    int ajoy;
    printf("Enter Ajoy year :");
    scanf("%d", &ajoy);

    if (ram > shyam && ram > ajoy)
        printf("The Youngest Ram.");

    else if (shyam > ram && shyam > ajoy)
        printf("The Youngest Shyam.");

    if (ajoy > shyam && ajoy > ram)
        printf("The Youngest Ajoy.");

    else
        printf("Ram , Shyam, Ajoy same year.");

    return 0;
}