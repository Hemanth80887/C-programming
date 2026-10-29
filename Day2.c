#include <stdio.h>
int main(){
    int age =23;
    int year =2026;
    int price = 150000;
    float gpa =8.2;
    float gas = 110.5;
    float temp = 26.5;

    double pi = 3.14159235648544949;

    char grade  = 'A';
    char symbol = '!';
    char currency ='$';

    char name[] = "Hemanth"; // array
    char food[]="Biryani";
    printf("I am %d years of age\n", age);
    printf("I am 23 in %d\n",year);
    printf("I bought a phone for %d\n",price);
    printf("my cgpa is %.2f\n",gpa);
    printf("the gas price is Rs%.2f",gas);
    printf("the temperature is %.2f°C\n",temp);
    printf("the value of pi is %lf",pi);
    printf("my grade is %c\n",grade);
    printf ("my favourite symbol is %c\n",symbol);
    printf("the american  %c is expensive\n",currency);
    printf("my name is %s\n",name);
    printf("%s favourite food is %s\n",name,food);
    return 0;
}