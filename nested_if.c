#include <stdio.h>
#include <stdbool.h>

int main(){

    float price =10.00;
    bool isStudent = false; // 10% discount
    bool isSenior = true; // 20% discount

    // student = $9
    // seniour = $8
    // student + seniour = $7

    if(isStudent){
        if(isSenior){
            printf("You get a student discount of 10% \n");
            printf("You get a senior discount of 20% \n");
            price=price*0.7;
            
        }
        else{
            printf("You get a student discount of 10% \n");
            price = price*0.9;
        }
    }
    else{
        if(isSenior){
            printf("You get a senior discount of 10% \n");
            price =price*0.8;   
        }
      
printf("the price of your ticket is $%.2f",price);
    }
    

    return 0;
}