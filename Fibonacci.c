#include <stdio.h>


int fibonacci(int num) {
    if (num == 1) {
        return 1; 
    } else if (num == 2) {
        return 1; 
    } else {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}


void printFibonacci(int n) {
    printf("The first %d Fibonacci numbers are:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printFibonacci(n);

    return 0;
}
