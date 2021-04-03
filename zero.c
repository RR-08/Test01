#include<stdio.h>

int array[10],nbr=0,ctr=0;

int main(void){
    for(ctr=0;ctr<10&&nbr!=0;ctr++)
    {
    puts("enter a number 0 to quit");
    scanf("%d",&nbr);
    array[ctr]=nbr;
    printf("%d\n",array[ctr]);

    }

    return 0;
}
