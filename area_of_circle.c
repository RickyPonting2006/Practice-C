#include <stdio.h>
int main()
{
	float radius,area;
	printf("Enter the number:");
	scanf("%f",&radius);
	area=3.14*radius*radius;
	printf("Area of the circle%.2f\n",area);
	return 0;
}
