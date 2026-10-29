#include <stdio.h>

int main(){

    int choice = 0;
    float kilogram = 0;
    float pound =0;
    float total = 0;

    printf("WELCOME TO WEIGTH CONVERTER\n");
    printf("1.Convert kilogram to pound\n");
    printf("2.Convert pound to Kilogram\n");
    printf("Choose one option\n");
    scanf("%d",&choice);

    if(choice ==1){
        printf("Enter your weight in kilogram :");
        scanf("%f",&kilogram);
        pound =kilogram*2.20462;
        printf("%.2f kilogram is equal to %.2f pound\n",kilogram,pound);
    }else if(choice==2){
        printf("Enter your weight in pound :");
        scanf("%f",&pound);
        kilogram = pound /2.20462;
        printf("%.2f pound is equal to %.2f kilogram",pound,kilogram);
    }else{
        printf("Choose one option");
    }
    return 0;
}