#include <stdio.h>
int main()
{
	int daynum;
	printf("Enter a number between 1 to 7:");
	scanf("%d",&daynum);
	switch(daynum){
	case 1:
	printf("Monday\n");
	break;
	case 2:
	printf("Tuesday\n");
	break;
	case 3:
	printf("Wednesday\n");
	break;
	case 4:
	printf("Thursday\n");
	break;
	case 5:
	printf("Friday\n");
	break;
	case 6:
	printf("Saturday\n");
	break;
	case 7:
	printf("Sunday\n");
	break;
	default:
	printf("Invalid\n");
}
   	return 0;
}
