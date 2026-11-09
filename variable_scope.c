#include <stdio.h>

// int result = 0; global variable ( hard to debug)
int add (int x, int y){
    int result = x+y;
    return result;
}

int sub(int x, int y){
    int result = x-y;
    return result;
}
int main(){


    // variable scope = Refers to where a variable is recognized and accessible.
    //                  Variables can share the same name if 
    //                  they're in different scope {}

    int x= 5; //local
    int y = 6;

   int result = add(x,y);
   int result1 = sub(x,y);
    printf("%d\n",result);
    printf("%d",result1);
    
    return 0;
}