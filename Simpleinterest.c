#include<stdio.h>
int main()
{
    float principal,roi,si;
    int time;
    printf("Enter the principal amount\n");
    scanf("%f",&principal);
    printf("Enter the rate of interest\n");
    scanf("%f",&roi);
    printf("Enter the time\n");
    scanf("%d",&time);
    si=(principal*time*roi)/100;
    printf("Simple interest is %.2f",si);
    return 0;
}