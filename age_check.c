#include <stdio.h>


void ageCheck(int age){
    if(age>=18 && age<30){
        printf("Your are welcome to the party");
    }else if (age<18 && age>0){
        printf("You are not welcome to the party" );
    }else{
        printf("You are you dude");
    }

}

int main(){
    int age;

    printf("How old are you ?:");
    scanf("%d",&age);
    ageCheck(age);
    return 0;
}
