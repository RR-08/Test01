#include <stdio.h>
#include <conio.h>
void main()
{
int num,temp,sum=0,rem,i,choice;
clrscr();
printf(“\nEnter the number “); 
scanf(“%d”,&num);

do
{
   printf(“\n\nEnter choice =>”);
   scanf(“%d”,&choice);
  switch (choice)
   {
       case 1:  
       temp=num;
       do
         {
              rem=temp%10;
              sum=sum+rem;
              temp=temp/10;
          }
         while(temp!=0);     
         printf("\nSum of digits of %d is =%d",num,sum);  
         break;  

}
} 
while(choice<=2);  
getch();
} 