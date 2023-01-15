#include <stdio.h>  
int main()  
{  
    float width,height,perimeter;  
    printf("Enter width of Rectangle\n");  
    scanf("%f",&width);  
    printf("Enter height of Rectangle\n");  
    scanf("%f",&height);  
    perimeter=2*(width+height);  
    printf("Perimeter of Rectangle is %.2f\n",perimeter);  
    return 0;  
}  