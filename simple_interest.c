#include <stdio.h>
int main()
{
	float total_amount,interest_rate,year,si;
	printf("Enter the total amount:");
	scanf("%f",&total_amount);
	printf("Enter the interest rate:");
	scanf("%f",&interest_rate);
	printf("Enter the year:");
	scanf("%f",&year);
	si=(total_amount*interest_rate*year)/100;
	printf("Simple Interest=%.2f\n",si);
	return 0;
}
