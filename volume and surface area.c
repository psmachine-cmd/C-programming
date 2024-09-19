//Programm to find the volume and surface area of a cylinder
#include<stdio.h>
int main(){
    int height,radius,volume,surfacearea;
    
    printf("Enter the height ");
    scanf("%d",&height);
    
    printf("Enter the radius ");
    scanf("%d",&radius );
    
    volume=(22/7*radius*radius*height);
    
    printf("The volume   is %d\n",volume);
    
    surfacearea=(2*22/7*radius*radius)+(2*22/7*radius*height);
    
    printf("The surfacearea is %d ",surfacearea);
    
    
    return 0;
}
