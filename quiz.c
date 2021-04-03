#include<stdio.h>
#include<ctype.h>
#include<string.h>


int main(void)
{
    char ch[100];
    printf("Enter string:");
    scanf("%[^\n]",&ch);
    
    printf("%d",strlen(ch));

    return 0;

}