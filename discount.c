// CLOTHING DISCOUNT
#include <stdio.h>
#include <string.h>

int main(){
    float shirt = 55;
    float pant = 40;
    char cloth[50] = "";
    float total =0;


    printf("Do you want to buy a pant or a shirt :");
    fgets(cloth,sizeof(cloth),stdin);
    cloth[strlen(cloth)-1]='\0';

    if(strcmp(cloth,"pant")==0){
        printf("You get a dicount of 20% \n");
        pant = pant*0.8;
        
        printf("Do u also want to buy a shirt (yes/no) ? :");
        fgets(cloth,sizeof(cloth),stdin);
        cloth[strlen(cloth)-1]='\0';

        if(strcmp(cloth,"yes && Yes")==0){
            printf("You get a discount of 40% \n ");
            total = (shirt+pant)*0.6; 
            printf("Your total is %.2f",total);
        }else{
            printf("Your total is %.2f",pant);
        }
}
    if(strcmp(cloth,"shirt")==0){
        printf("You get a dicount of 10% \n");
        shirt = shirt*0.9;

        printf("Do u also want to buy a pant (yes/no) ? :");
        fgets(cloth,sizeof(cloth),stdin);
        cloth[strlen(cloth)-1]='\0';

        if(strcmp(cloth,"yes && Yes")==0){
            printf("You get a discount of 40% \n ");
            total = (shirt+pant)*0.6; 
            printf("Your total is %.2f",total);
        }else{
            printf("Your total is %.2f",shirt);
    }

return 0;
    }
}
