//Program to store block of bytes using fwrite()
#include<stdio.h>
typedef struct bank{
    int accno;//4
    char acname[30];//30
    double balance;//8
}bank;
void printDetails(bank customer){
    printf("Account Number:%d\n",customer.accno);
    printf("Account name:%s\n",customer.acname);
    printf("Balance:%.2lf\n",customer.balance);
}
int main()
{
    bank customer;
    FILE *fptr;
    char fileName[30];
    printf("Enter database name:");
    scanf("%s",fileName);
    fptr=fopen(fileName,"a+");//append and read
    if(fptr==NULL){
        printf("File creation error!");
        return 0;
    }
    //file is opened
    fread(&customer,sizeof(customer),1,fptr);
    printDetails(customer);
    //writing block of bytes into the file pointer
    fclose(fptr);
    return 0;
    
}
/*Output: enter database name:customer.database
           if u enter previous database name,
           it automatically displays account number,
           name and balance */