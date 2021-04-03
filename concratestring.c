#include <stdio.h>
#include<string.h>
int main() {
  char s1[100] ="hi there", s2[100]=" i am riya",a;
  //char *strcat(char *s1, const char *s2);
  
  printf("%s",strcat(s1,s2));


  return 0;
}