#include<stdio.h>
junk(int i,int j){
    i=i*i;
    j=j*j;

}
int main(void){
    int i=5,j=2;
    junk(i,j);
    printf("%d %d",i,j);
}