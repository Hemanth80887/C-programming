#include <stdio.h>
#include <stdbool.h>

// function prototype = Provide the compiler with information about a function's.
//                      name, return type and parameter before its actual definition.
//                      Enables type checking and allows functions to be used before
//                       they're defined.
//                       Improves  readability, Organization, and helps prevent errors.

void hello(char name[],int age); // function prototype
bool ageCheck(int age);

int main(){
    hello("Hemanth",25);
    

    if(ageCheck(5)){
        printf("Your are welcome");
    }
    else{
        printf("You are not welcome");
    }

    return 0;
}

void hello(char name[],int age){
    printf("Hello %s\n",name);
    printf("You are %d years old\n",age);

}
bool ageCheck(int age){
    return age>=18;

}