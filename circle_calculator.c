#include <stdio.h>
#include <math.h>
int main(){
    
    double radius =0.0;
    double area = 0.0;
    double surfacearea = 0.0;
    double volume = 0.0;
    double PI= 3.1415;
    printf("Enter the radius : ");
    scanf("%lf",&radius);

    area = PI *pow(radius,2);
    surfacearea = 4*PI*pow(radius,2);
    volume = (4.0/3.0)*PI*pow(radius,3);
    
    printf("The area of the circle of the given radius %.2lf is %.2lf\n",radius,area);
    printf("The surface area of the circle of the given radius %.2lf is %.2lf\n",radius,surfacearea);
    printf("The volume of a circle of the given radius %.2lf is %.2lf",radius,volume);
    
    
    return 0;

}