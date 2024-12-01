#include<stdio.h>
int main()
{
    /*int num1,num2,sum;
    float avg;
    printf("Enter two number:");
    scanf("%d %d",&num1,&num2);
    sum = num1+ num2;
    printf("The sum is : %d\n",sum);

    avg = (float)sum/2;  //type casting
    printf("The average is = %.2f\n",avg);*/

   int num1,num2,result;

   printf("Enter two number :");
   scanf("%d %d",&num1,&num2);

   result=num1+num2;
   printf("Sum=%d\n",result);
   result=num1- num2;
   printf("Sub=%d\n",result);
   result=num1*num2;
   printf("Mul=%d\n",result);
   result=num1/num2;
   printf("Div=%d\n",result);
   result=num1%num2;
   printf("Remainder=%d\n",result);


    return 0;

}
