#include <stdio.h>
#include <windows.h>
#include <string.h>

int main(){

    int quantity = 0;
    float price = 0.0f;
    float total = 0.0f;
    char currency = '$';
    char item[50]= "";
    char purchase;
    char pay[30];

    printf("What item would you like to buy ? : ");
    fgets(item,sizeof(item),stdin);

    printf("How many would you like to buy ? : ");
    scanf("%d",&quantity);

    printf("What is the price of each : ");
    scanf("%f",&price);

    total =price*quantity;

    printf("%c%.2f\n",currency,total);

    getchar();
    printf("Do you want to confirm your purchase (Y/N) : ");
    scanf("%c",&purchase);
    printf("%c\n",purchase);
    if(purchase == 'Y' || purchase =='y'){
        printf("Your purchase is confirmned\n");
    }else{
        printf("Your purchase is not confirmed\n");
    }

    getchar();
    printf("How would you like to pay (cash/card/UPI): ");
    fgets(pay,sizeof(pay),stdin);
    pay[strcspn(pay,"\r\n")] = '\0';
    if(strcmp(pay,"card")==0){
        getchar();
        printf("Card processing\n");
        Sleep(2000);
        printf("Card payment successfull\n");
        printf("Thanks for purchasing , Visit again");
    }else if(strcmp(pay,"cash")==0){
        getchar();
        printf("Thanks for purchasing , Visit again");
    }else if (strcmp(pay,"UPI")==0){
        getchar();
        printf("Payment processing\n");
        Sleep(2000);
        printf("UPI payment successfull\n");
        printf("Thanks for purchasing , Visit again");
    }



    return 0;
}