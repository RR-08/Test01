#include<stdio.h>
int main()
{
    int number,n;
    printf("Enter number\n");
    scanf("%d",&number);
    int choice;
    printf("Enter 1 for summation or 2 for reverse a number 3 palindrome or not\n");
    scanf("%d",&choice);
    n=number;
    int sum = 0;
    int fact = 1;
    switch(choice)
    {
        case 1:
            while(number>0)
            {
                sum = sum+(number%10);
                number = number/10;
            }
            printf("%d\n",sum);
            break;
        case 2:
            int rev_num = 0;
        while(n > 0)
        {
        rev_num = rev_num*10 + n%10;
        n = n/10;
        }
    

            break;
        default:
            printf("Error\n");
    }
    return 0;
}