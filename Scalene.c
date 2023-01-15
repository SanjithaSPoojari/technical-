#include<stdio.h>
#include<math.h>
int main() 
{
    int s1,s2,angle;
    float area;
    printf("Enter Side1:\n");
    scanf("%d",&s1);
    printf("Enter Side2:\n");
    scanf("%d",&s2);
    printf("Enter included angle:\n");
    scanf("%d",&angle);
    area=(s1*s2*sin(angle))/2;
    printf("Area of Scalene Triangle:%.2f\n",area);
    return 0;
}