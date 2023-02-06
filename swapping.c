#include<stdio.h>
int main()
{
    int a,b,temp=0;
    printf("Enter two variables\n");
    scanf("%d%d",&a,&b);
    printf("Before Swapping\n");
    printf("%d %d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter swapping\n");
    printf("%d %d",a,b);
    return 0;
}