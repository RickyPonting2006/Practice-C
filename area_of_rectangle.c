#include <stdio.h>
int main()
{
	float length,width,area;
	printf("Enter the value of the length:");
	scanf("%f",&length);
	printf("Enter the value of the width:");
	scanf("%f",&width);
	area=length * width;
	printf("Area of the Rectangle is:%.2f\n",area);
	return 0;
}
