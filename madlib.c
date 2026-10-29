#include <stdio.h>
#include <string.h>

int main(){

    char noun[30] ="";
    char verb[50] ="";
    char adj1[50] ="";
    char adj2[50] ="";
    char adj3[50] ="";

    printf("Enter a noun (animal or person) : ");
    fgets(noun,sizeof(noun),stdin);
    noun[strlen(noun)-1]='\0';

    printf("Enter the verb (ending with ing) : ");
    fgets(verb,sizeof(verb),stdin);
    verb[strlen(verb)-1] = '\0';

    printf("Enter a adjective (descriptive) : ");
    fgets(adj1,sizeof(adj1),stdin);
    adj1[strlen(adj1)-1] = '\0'; 

    printf("Enter a adjective (descriptive) : ");
    fgets(adj2,sizeof(adj2),stdin);
    adj2[strlen(adj2)-1] = '\0';
    printf("Enter a adjective (descriptive) : ");
    fgets(adj3,sizeof(adj3),stdin);
    adj3[strlen(adj3)-1] = '\0';

    printf("\n Today i went to the %s market.\n",adj1);
    printf("In a stall, I saw %s.\n",noun);
    printf("%s was %s and %s and %s.\n",noun,adj2,adj3,verb);

    return 0;
}