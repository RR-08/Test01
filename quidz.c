#include<stdio.h>
int main(void){
 int c=5,no=10;
 do
 {
     no/=c;
 } while (c--);

 printf("%d",no);
 return 0;
 

}
