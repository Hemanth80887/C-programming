#include <stdio.h>

int cube(int num){
    return num*num*num;
}
int square (int num){
    return num * num;
}
int main(){

    // return = returns a value back to where you call a function
    int x= square (2);
    int y= square (3);
    int z= square (4);

    int a= cube(2);
    int b= cube(3);
    int c= cube(4);

    printf("%d\n",x);
    printf("%d\n",y); 
    printf("%d\n",z);

    printf("%d\n",a);
    printf("%d\n",b); 
    printf("%d\n",c);
    

    return 0 ;

}