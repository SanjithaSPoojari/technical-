#include<stdio.h>
int main()
{
    int num1,num2,num3,sum;
    float average;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    sum=num1+num2+num3;
    printf("Sum of three numbers is %d",sum);
    average=(sum)/3;
    printf("Average of three numbers is %.2f",average);
    return 0;
}