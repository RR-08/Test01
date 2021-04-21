#include<stdio.h>
#define a 2
int main(void){
    int i=5,j=10;
 /*  int r;
    #define a 5
  r=a*2;
  printf("%d",r);*/
do{
    j/=i;
}while (/* condition */i--);

printf("%d",j);

  return 0;
}