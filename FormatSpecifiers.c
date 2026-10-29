/*
format specifier = special token that begin with % a symbol
followed by a character that specifies the data type 
and optional modifiers (width, precision, flags).
They control how data is displayed or interpreted.


*/
#include <stdio.h>
int main(){
    int age =26;
    float cgpa = 8.5;
    double pi = 3.1415926535;
    char currency = '$';
    char name[]= "Hemanth";
    
    printf("%d\n",age);
    printf("%f\n",cgpa);
    printf("%lf\n",pi);
    printf("%c\n",currency);
    printf("%s\n",name);


    int num=1;
    int num1=10;
    int num2=-100;
    printf("%4d\n",num);
    printf("%4d\n",num1);
    printf("%4d\n",num2);

    printf("%-4d\n",num);
    printf("%-4d\n",num1);
    printf("%-4d\n",num2);

    printf("%04d\n",num);
    printf("%04d\n",num1);
    printf("%04d\n",num2);

    printf("%+d\n",num);
    printf("%+d\n",num1);
    printf("%+d\n",num2);

    float p=15.6666;
    float p1=18026.65656;
    float p2 = 569875.6656;
    printf("%.2f\n",p);
    printf("%.2f\n",p1);
    printf("%.2f\n",p2);

    return 0;
}