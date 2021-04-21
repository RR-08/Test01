#include <stdio.h>
#include <ctype.h>
int main()
{
	char ch='o';

  	do
      {
       printf("Please Enter any character : ");
  	   scanf("%c", &ch);
      } while ((ch >= '0' && ch <= '9')||( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ));
      
    

    return 0;

}