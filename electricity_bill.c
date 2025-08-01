#include <stdio.h>

int main() {
    float units, bill = 0;
    
    printf("Enter the number of units consumed: ");
    scanf("%f", &units);
    
    if(units <= 50) {
        bill = units * 3.50; 
    }
    else if(units <= 150) {
        bill = 50 * 3.50 + (units - 50) * 4.00;  
    }
    else if(units <= 250) {
        bill = 50 * 3.50 + 100 * 4.00 + (units - 150) * 5.20;  
    }
    else {
        bill = 50 * 3.50 + 100 * 4.00 + 100 * 5.20 + (units - 250) * 6.50;  
    }
    
    printf("Electricity Bill = Rs. %.2f\n", bill);
    
    return 0;
}
