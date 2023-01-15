#include<stdio.h>
#include<math.h>
int main()
{
    float principle,rate,time,ci;
    printf("Enter principle amount:");
    scanf("%f",&principle);
    printf("Enter time:");
    scanf("%f",&time);
    printf("Enter rate:");
    scanf("%f",&rate);
    ci=principle*(pow((1+rate/100),time));
    printf("Compound Interest = %.2f",ci);
    return 0;
}