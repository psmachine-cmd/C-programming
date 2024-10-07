//Program to calculate the cube of numbers

#include<stdio.h>
int main (){
  int num ,cube ,count=0;
  printf("To calcutate the cube in a number: ");
  scanf("%d",&num );
  while (count<8){
    cube=(num*num*num);
    printf("The number %d",cube );
    printf(" \n");
    num++;
    count++;
  }
  return 0;
}
