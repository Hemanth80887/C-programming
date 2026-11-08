#include <stdio.h>
#include <stdbool.h>

bool ageCheck(int age){
    if(age>=18){
        return true;
    }else{
        return false;
    }
    
}

int main(){

    int age = 44;
    if(ageCheck(age)){
        printf("You can sign up");
    }else{
        printf("You cant sign up");
    }
    return 0;
}