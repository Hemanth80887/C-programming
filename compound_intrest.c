#include <stdio.h>
#include <math.h>

int main(){

    double rate =0.0;
    double principle = 0.0;
    int years = 0;
    int timesCompounded =0;
    double total =0.0;

    printf("COMPOUND INTREST CALCULATOR\n");

    printf("Enter the principle P:");
    scanf("%lf",&principle);

    printf("Enter the intrest rate r :");
    scanf("%lf",&rate);
    rate = rate/100;

    printf("Enter the times compounded n :");
    scanf("%d",&timesCompounded);

    printf("Enter the number of years t :");
    scanf("%d",&years);

    total = principle*pow(1+rate/timesCompounded ,timesCompounded*years);
    printf("After %d the total amount is $%.2lf",years,total);







    return 0;
}