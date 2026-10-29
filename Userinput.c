#include <stdio.h>
#include <string.h>
int main(){
    
    int age = 0;
    float gpa= 0.0f;
    char grade = '\0';
    char name[30] = "";

    // printf("%d\n",age);
    // printf("%f\n",gpa);
    // printf("%c\n",grade);
    // printf("%s\n",name);
    printf("what is your age : ");
    scanf("%d",&age); //& = adress of operator;
    
    printf("Enter your gpa : ");
    scanf("%f",&gpa);

    printf("Enter your grade : ");
    scanf(" %c",&grade);

    getchar(); // consume the left over new line
    printf("Enter your full name : ");
    //scanf = ex : raj kumar , scanf considers only raj and reads and ignores the white spaces
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1]='\0';  // to remove the new line

    printf("%s\n",name);
    printf("%c\n",grade);
    printf("%.2f\n",gpa);
    printf("%d\n",age);


        return 0;
}