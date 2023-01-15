#include<stdio.h>
int main()
{
	float volume,radius;
	printf("Enter radius of the sphere: ");
	scanf("%f",&radius);
    volume=(4*3.14*radius*radius*radius)/3; 
	printf("VOLUME OF SPHERE: %.2f\n",volume);
	return 0;
}