#include <stdio.h>
#include <string.h>

void happyBirthday(char name[],int age){
    printf("Happy birthday to you\n");
    printf("Happy birthday to you\n");
    printf("Happy birthday to you dear %s \n",name);
    printf("Happy birthday to you\n");
    printf("You are %d years old\n",age);
}

int main(){

// function = A reusable section of code that can be involed "called"
// Arguments can be sent too a function so that it can be use them
    char name [50]="";
    int age =0;
printf("What is your name ? : ");
fgets(name,sizeof(name),stdin);
name[strlen(name)-1] ='\0';

printf("How old are you ? :");
scanf("%d",&age);


happyBirthday(name,age);


    return 0;
}