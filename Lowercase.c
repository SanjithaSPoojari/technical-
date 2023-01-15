#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("Enter a string\n");
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++)
    {
        str[i]=str[i]+32;
    }
    printf("Lowercase is %s\n",str);
    return 0;
}