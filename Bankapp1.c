//Banking application
#include<stdio.h>
#include"bank.h"
void mainMenu(){
    printf("\nBanking Application\n");
    printf("********************\n");
    printf("\n1.Add Customer\n");
    printf("2.Remove Customer\n");
    printf("3.Update Customer\n");
    printf("4.View All Customer\n");
    printf("5.Find Customer\n");
    printf("6.Exit\n");
    printf("Select your choice:");
}
void add_customer(char file[]){
    bank customer;
    FILE *fptr=fopen(file,"a");
    if(fptr==NULL){
        printf("File creation error!");
        return;
    }
    customer=getDetails();
    fwrite(&customer,sizeof(customer),1,fptr);
    fclose(fptr);
}
int main(){
    int choice;
    char fileName[30];
    printf("Enter file name:");
    scanf("%s",fileName);
    do{
        mainMenu();
        scanf("%d",&choice);
        switch(choice){
            case 1: add_customer(fileName);break;
        }
    }
    while(choice!=6);
    printf("Thank you for being with us!");
    return 0;
}