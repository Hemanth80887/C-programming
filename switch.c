#include <stdio.h>
int main(){
    
    // switch  = an alternative to usinf many
    //              if-else statements more effecient eith 
    //              fixed integer value.
    char dayOfWeek = '\0';
    printf("Enter a day of the week from (M,T,W,R,F,S,U) :");
    scanf("%c",&dayOfWeek);
    switch(dayOfWeek){
        case 'M': 
            printf("It is Monday");
            break;
        case 'T':
            printf("It is Tuesday");
            break;
        case 'W':
            printf("It is Wednesday");
            break;
        case 'R':
            printf("It is Thursday");
            break;
        case 'F':
            printf("It is Friday");
            break;
        case 'S':
            printf("It is Saturday");
            break;
         case 'U':
            printf("It is Sunday");
            break;
        default:
            printf("Please enter a character between (M,T,W,R,F,S,U)");
            break;
    }
    
    
    return 0;

}