#include <stdio.h>
int main()
{
    int result;
    int cp;
    printf("Costing Price :");
    scanf("%d", &cp);

    int sp;
    printf("Selling Price :");
    scanf("%d", &sp);

    if (cp < sp)
    {
        result = sp - cp;
        printf("Profit :%d", result);
    }

    else if (cp > sp)
    {
        result = cp - sp;
        printf("Loss :%d", result);
    }
    else
        printf("No profit No Loss");

    return 0;
}