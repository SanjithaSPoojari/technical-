#include<stdio.h>
void main()
{
    int num,i,flag=0;
    printf("Enter a number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            flag++;
        }
    }
    if(flag==2)
    {
        printf("Number is prime");
    }
    else
    {
        printf("Number is not prime");
    }
}