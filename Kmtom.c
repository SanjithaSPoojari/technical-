#include <stdio.h>
int main() 
{
	float kilometers,miles;
    printf("Enter kilometer per hour:");
	scanf("%f",&kilometers);
    miles=kilometers/1.6;
    printf("%f in kilometers is converted to %.2f in miles\n",kilometers,miles);
    return 0;
}