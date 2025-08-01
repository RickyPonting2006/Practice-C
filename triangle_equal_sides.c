#include <stdio.h>

int isValidTriangle(float a, float b, float c) {
    return (a > 0 && b > 0 && c > 0 && (a + b + c == 180));
}

int main() {
    float angle1, angle2, angle3;
    
    printf("Enter three angles of the triangle: ");
    scanf("%f %f %f", &angle1, &angle2, &angle3);
    
    if (isValidTriangle(angle1, angle2, angle3)) {
        printf("The triangle is valid.\n");
    } else {
        printf("The triangle is not valid.\n");
    }
    
    return 0;
}
