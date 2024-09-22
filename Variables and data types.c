//C variable and Data Types
//Preprocessor directive
#include<stdio.h>//scanf(),printf()
int main(){
    //declaration and initialization
    char a;
    char name [5];
    int age;
    float area ;
    double salary;
    
    printf("Enter a character: ");
    scanf("%c",&a);
    
    printf("Enter your first name: ");
    scanf("%s", &name);
    
    printf("Enter your age ");
    scanf("%d",&age);
    
    printf("Enter area ");
    scanf("%f",&area);
    
    printf("Enter your salary ");
    scanf("%lf",&salary);
    
    printf("\n");
    
    printf("The character is %c \n",a);
    printf("The string is %s \n",name);
    printf("The age is %d \n",age);
    printf("The area is %.2f \n",area);
    printf("The salary is sh.%.2lf \n",salary);
    
    return 0;}
