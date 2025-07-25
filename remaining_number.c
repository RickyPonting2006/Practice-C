#include <stdio.h>

int main() {
    int dividend, divisor, remainder;

    printf("Enter the dividend: ");
    scanf("%d", &dividend);

    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    if (divisor != 0) {
        remainder = dividend % divisor;
        printf("The remainder is: %d\n", remainder);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}
