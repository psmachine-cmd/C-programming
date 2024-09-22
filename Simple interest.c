//programm to calculate simple intrest
#include <stdio.h>
int main(){
    int principleamount,time,rate,simpleinterest;
    
    printf("Enter the principle amount ");
    scanf("%d",&principleamount);
    
    printf("Enter the time ");
    scanf("%d",&time);
    
    printf("Enter the rate ");
    scanf("%d",&rate);
    
    simpleinterest=(principleamount*time*rate)/100;
    
    printf("The simple interest is %d",simpleinterest);
    
    return 0;
    
}
