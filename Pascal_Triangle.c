#include<stdio.h>


int factorial(int x) {
    int fact = 1;
    for(int i = 2; i <= x; i++) {
        fact = fact * i;
    }
    return fact;
}


int nCr(int n, int r) {
    int ncr = factorial(n) / (factorial(r) * factorial(n - r));
    return ncr;
}

int main() {
    int rows;

    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    
    for (int i = 0; i < rows; i++) {
        
        for (int j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }

        
        for (int j = 0; j <= i; j++) {
            printf("%d ", nCr(i, j));
        }

        printf("\n");
    }

    return 0;
}
