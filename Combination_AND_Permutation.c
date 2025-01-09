// combination
// #include<stdio.h>
// int factorial (int x)
// {
//     int fact = 1;
//     for(int i=2; i<=x; i++)
//     {
//         fact = fact*i;
//     }
//     return fact;
// }

/*
int combination(int n, int r)
{
    int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    return ncr; 
}
*/

// int main()
// {
//     int n;
//     printf("Enter n :");
//     scanf("%d",&n);

//     int r;
//     printf("Enater r :");
//     scanf("%d",&r);
//     int ncr = factorial(n)/(factorial(r)*factorial(n-r));  // combination(n,r);
//     printf("nCr :%d",ncr);
//     return 0;
// }

// Permutation
#include<stdio.h>

int factorial(int x) {
    int fact = 1;
    for(int i = 2; i <= x; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int n, r;

   
    printf("Enter n: ");
    scanf("%d", &n);

    
    printf("Enter r: ");
    scanf("%d", &r);

    
    int npr = factorial(n) / factorial(n - r);
    printf("nPr: %d\n", npr);

    return 0;
}
