// Programm to find compound interest
#include<stdio.h>
#include<math.h>
int main()
{
    float principle ,time,rate,compoundinterest;
    
    printf("Enter  the principle amount ");
    scanf("%f", &principle);
    
    printf("Enter the rate ");
    scanf("%f", &rate);
    
    printf("Enter time in years ");
    scanf("%f", &time );
    
    compoundinterest=principle*pow((1+rate/100),time);
    
    printf("The compound interest is %.2f",compoundinterest );
    
    return 0;
    
}
