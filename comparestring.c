int main()
{
   char string1[20],string2[20],*str1,*str2;
   printf("Enter first string\n");
   scanf("%s",string1);
    printf("Enter second string\n");
   scanf("%s",string2);
   str1=string1;
   str2=string2;
   while(*str1==*str2)
   {
       if(*str1==0||*str2==0)
       break;
       str1++;
       str2++;
   }
   if(*str1==0&&*str2==0)
        printf("Both the strings are same\n");
    else
        printf("Both the strings are different\n");
    return 0;
}