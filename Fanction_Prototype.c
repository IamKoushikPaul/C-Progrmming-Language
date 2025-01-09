#include<stdio.h>
void england ()
{
    printf("You are in England\n");
    return ;
}
void japan()
{
    printf("You are in japan\n");
    england();
    return ;
}
void india()
{
    printf("You are in india\n");
    japan();
    return ;
}

int main()
{
    india();
    return 0;
}