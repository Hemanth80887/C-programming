#include <stdio.h>
#include <stdbool.h>
int main(){
    bool isOnline = true;
    if(isOnline){
        printf("your are online");
    }
    else{
            printf("you are offline");
    }
    return 0;
}


//variables : a reusable container for a vlaue.
              //  Behaves as if it were the value it contains.
// int = whole number (4 bytes in modern system)
//float =  single precision decimal number (4 bytes)
// double = double - precision decimal number (8 bytes)
// char = single character (1 byte)
// char []= array of character (size varies)
// bool = true or false (1 byte, requires <stdbool.h>)