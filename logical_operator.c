#include <stdio.h>
#include <stdbool.h>

int main(){

    // logical operator  = used to combine or modify boolean expressions,.

    // && = AND
    // || = OR
    // ! = NOT

    // AND OPERATOR

    int temp =20;
    bool isSunny = true;

    // if(temp>0 && temp <30){
    //     printf("The temperature is good");
    // }
    // else {
    //     printf("The temperature is Bad");
    // }

     // OR OPERATOR

    //  if(temp <=0 || temp >=30){
    //     printf("The temperature is bad");
    //  }
    //  else{
    //     printf("The temperature is good");
    //  }

    //NOT OPERATOR

    if(!isSunny){
        printf("It is sunny outside");
    }
    else{
        printf("It is cloudy outside");
    }


    return 0;
}