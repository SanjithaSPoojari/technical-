#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num1,num2,res,ch;
    printf("Enter two numbers:\n");
    scanf("%d%d",&num1,&num2);
    do
    {
        printf("\nMENU\n");
        printf("\n1.Addition\t2.Subtraction\t3.Multiplication\t4.Division\t5.Remainder\t6.Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:res=num1+num2;
                    printf("RESULT=%d",res);
                    break;
            case 2:res=num1-num2;
                    printf("RESULT=%d",res);
                    break;
            case 3:res=num1*num2;
                    printf("RESULT=%d",res);
                    break;
            case 4:if(num2==0)
                    {
                        printf("Divide by zero error\n");
                    }
                    else
                    {
                        res=num1/num2;
                        printf("RESULT=%d",res);
                    }
                    break;
            case 5:res=num1%num2;
                    printf("RESULT=%d",res);
                    break;
            case 6:printf("Program exited sucessfully\n");
                    exit(0);
        }
    } while (ch!=6);
    
}