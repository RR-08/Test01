// a program to read +ve numbers from user till user enters 0 & display for each number whether it is even or odd
#include <stdio.h>
int main() {
    int num;

    do{
        do
        {
         printf("Enter an integer: ");
         scanf("%d", &num);

        }while(num<0);

        if(num % 2 == 0&&num!=0)
         printf("%d is even.\n", num);
        else if(num%2!=0)
         printf("%d is odd.\n", num);
        else
         printf("0 quits the program\n");

      }while(num!=0);
    return 0;
}
