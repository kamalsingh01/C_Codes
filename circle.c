#include <stdio.h>
#define PI 3.1416
int main()
{
	float radius;
	printf("Please enter the radius of circle: ");
	scanf("%f",&radius);  // &- address of operator
	printf("Area of Circle : %f\n",PI*radius*radius);
	return 0;
}
