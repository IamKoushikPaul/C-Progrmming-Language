#include <stdio.h>

int main() {
    int originalNum, remainder, result;

    printf("Armstrong numbers between 1 and 500:\n");

    for (int i = 1; i <= 500; i++) {
        originalNum = i;
        result = 0;


        while (originalNum != 0) {
            remainder = originalNum % 10;
            result =result + remainder * remainder * remainder;
            originalNum /= 10;
        }


        if (result == i) {
            printf("%d\n", i);
        }
    }

    return 0;
}
