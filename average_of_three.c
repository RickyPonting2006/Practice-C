#include <stdio.h>

int main() {
    float num1, num2, num3, average;

    printf("Enter three numbers:\n");
    scanf("%f %f %f", &num1, &num2, &num3);

    average = (num1 + num2 + num3) / 3;

    printf("The average is: %.2f\n", average);

    return 0;
}
