//Program to implement a grading system for student
#include<stdio.h>
int main(){
    int marks1,marks2,marks3;
    float average;
    
    printf("Enter marks for subject 1 ");
    scanf("%d",&marks1 );
    
    printf("Enter marks for subject 2 ");
    scanf("%d",&marks2);
    
    printf("Enter marks for subject 3 ");
    scanf("%d",&marks3 );
    
    average=(marks1+marks2+marks3)/3;
    
    if (average>=70 && average<=100){
        printf("Grade : A\n");
    }else if (average>=60 && average<=69){
        printf("Grade : B\n");
    }else if (average>=50 && average<=59){
        printf("Grade : C\n");
    }else if (average >=40 && average <=49){
        printf("Grade : D\n");
    }else if (average <40){
        printf("Grade : E(fail)\n");
    }else   {
        printf("Invalid marks entered\n");
    }
    return 0;
}
