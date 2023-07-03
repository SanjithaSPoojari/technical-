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
bank getDetails(){
    bank customer;
    printf("Account number:");
    scanf("%d",&customer.accno);
    printf("Account Name:");
    scanf("%s",customer.acname);
    printf("Balance:");
    scanf("%lf",&customer.balance);
    return customer;
}