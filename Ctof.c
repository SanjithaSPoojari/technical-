#include<stdio.h>
int main()
{
    int c;
    float f;
    printf("Enter temperature in centigrade\n");
    scanf("%d",&c);
    f=(c*1.8)+32;
    printf("%d in centigrade is converted to %.2f in fahrenheit\n",c,f);
    return 0;
}