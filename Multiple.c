#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number \n");
	scanf("%d",&n);
	if(n>0)
    {
	    if(n%5==0)
        {
	        printf("%d is a multiple of 5\n",n);
        }
	    else
        {
	        printf("Invalid input\n");
        }
    }
    return 0;
}