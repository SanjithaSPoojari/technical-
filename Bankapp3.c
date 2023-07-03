//Banking application
#include<stdio.h>
#include<stdlib.h>
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
//Display all customer
void view_customer(char file[]){
    FILE *fptr=fopen(file,"r");
    bank customer;
    if(fptr==NULL){
        printf("%s does not exist",file);
        return;
    }
    while(1){
        fread(&customer,sizeof(customer),1,fptr);
        if(feof(fptr))break;
        printDetails(customer);
    }
    fclose(fptr);
}
bank *find_customer(char file[],int accno){
    FILE *fptr=fopen(file,"r");
    bank *customer=(bank*)malloc(sizeof(bank));
    while(1){
        fread(customer,sizeof(bank),1,fptr);
        if(feof(fptr))break;
        if(customer->accno==accno){
            return customer;
        }
    }
    fclose(fptr);
    return NULL;
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
            case 4:view_customer(fileName);break;
        case 5:{
            int accno;
            bank *customer;
            printf("Enter account number:");
            scanf("%d",&accno);
            customer=find_customer(fileName,accno);
            if(customer!=NULL){
                printDetails(*customer);
            }
            else{
                printf("Invalid account number!");
            }
        }
        }
    }
    while(choice!=6);
    printf("Thank you for being with us!");
    return 0;
}